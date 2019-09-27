#=

sr = singular runtime

sr prefix generally means the function corresponds to a singular function/operator
sr_ prefix means it used internally
    ex: SINGULAR    JULIA
        string(a)   srprint(a)
        a + b       srplus(a, b)
        a;          sr_printout(a)


It is possible for elements of a Singular list to be "nothing", i.e. l[1] after
list l; l[2] = 0;

Functions can also return "nothing", i.e. the return value of
proc f() {return();};

Therefore we use Julia's :nothing for both of these "nothings" and do include Nothing in SingularType below.

This "nothing" is distinct from a zero-length tuple and is very distinct from the SName type defined below
For example, the statement
a, b = 1, f(), 1;
fails in the Singular interpreter because the right hand side has length 3. The statement
a, b, c = 1, f(), 1
fails in the Singular interpreter because something on the "right side is not a datum".

The Julia interpreter will fail in the first example because the length of the rhs tuple is checked before assignment.
The Julia interpreter will fail in the second example because the assignment to b is done via
b = convert2something(..)       # "something" is the stored type of b, which we won't allow to be Nothing
and the convert2something will throw an error on :nothing (unless b was declared a "def")

In general, it is allowed to pass nothing around in singular, i.e.
list k, l;
l[2] = 0;       // size(l) is 2, l[1] is nothing
k[1] = 0;       // size(k) is 1
k[1] = l[1];    // size(k) is 0

Therefore, the error must occur when trying to assign nothing to b, and not when constructing the tuple.

=#


#### singular type "?unknown type?", which is not avaiable to the user
struct SName
    name::Symbol
end
makeunknown(s::String) = SName(Symbol(s))

##### singular type "proc"
struct SProc
    func::Function
    name::String
end
procname_to_func(name::String) = Symbol("##"*name)
procname_to_func(f::Symbol) = procname_to_func(f.name)


#### singular type "int"
# Int same

#### singular type "bigint"
# BigInt same

#### singular type "string"
# Singular splats all arguments inside () by default, so we need ... in Julia
# The julia String is iterable, so we need another type
struct SString
    string::String
end

#### singular type "intvec"
struct SIntVec
    vector::Vector{Int}
end

#### singular type "intmat"
struct SIntMat
    matrix::Array{Int, 2}
end

#### singular type "bigintmat"
struct SBigIntMat
    matrix::Array{BigInt, 2}
end

#### singular type "list"
mutable struct SListData # special type to wrap Vector{Any} to avoid exploding type inference
    data::Vector{Any}
end

struct SList
    list::SListData
end

#### singular type "poly"
struct SPoly
    ring::Symbol
    value::String
end

#### singular type "ideal"
struct SIdeal
    ring::Symbol
    vector::Array{String, 1}
end

#### singular type "matrix"
struct SMatrix
    ring::Symbol
    matrix::Array{String, 2}
end

const SingularRingType = Union{SPoly, SIdeal, SMatrix}


#### singular type "ring"
mutable struct SRing
    valid::Bool
    varstack::Array{Dict{Symbol, SingularRingType}, 1}
end

const SingularType = Union{SingularRingType, SRing, Nothing, SName, SProc, Int, BigInt, SString, SIntVec, SIntMat, SBigIntMat, SList}


mutable struct SGlobalState
    rtimer_base::UInt
    rtimer_scale::UInt
    fxnstack::Array{Dict{Symbol, Any}}
    allrings::Array{SRing}
    currentring::SRing
end

const sNullRing = SRing(false, [Dict{Symbol, SingularRingType}()])
const sGlobal = SGlobalState(time_ns(), 1000000000, [Dict{Symbol, Any}()], SRing[], sNullRing)

# all of the singular types have trivial iterators - will be used because all arguments to functions are automatically splatted

Base.iterate(a::Nothing) = iterate(a, 0)
Base.iterate(a::Nothing, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SProc) = iterate(a, 0)
Base.iterate(a::SProc, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SString) = iterate(a, 0)
Base.iterate(a::SString, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SIntVec) = iterate(a, 0)
Base.iterate(a::SIntVec, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SIntMat) = iterate(a, 0)
Base.iterate(a::SIntMat, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SBigIntMat) = iterate(a, 0)
Base.iterate(a::SBigIntMat, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SList) = iterate(a, 0)
Base.iterate(a::SList, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SPoly) = iterate(a, 0)
Base.iterate(a::SPoly, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SIdeal) = iterate(a, 0)
Base.iterate(a::SIdeal, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SMatrix) = iterate(a, 0)
Base.iterate(a::SMatrix, state) = (state == 0 ? (a, 1) : nothing)
Base.iterate(a::SRing) = iterate(a, 0)
Base.iterate(a::SRing, state) = (state == 0 ? (a, 1) : nothing)


# the underscore types include the underlying mutable containers
const _IntVec    = Union{SIntVec, Vector{Int}}
const _IntMat    = Union{SIntMat, Array{Int, 2}}
const _BigIntMat = Union{SBigIntMat, Array{BigInt, 2}}
const _List      = Union{SList, SListData}
const _SingularType = Union{SingularRingType, Nothing, SName, SProc, Int, BigInt, SString, SIntVec, SIntMat, SBigIntMat, SList, Vector{Int}, Array{Int, 2}, Array{BigInt, 2}, SListData}


function Base.deepcopy_internal(a::SIntVec, dict::IdDict)
    return SIntVec(deepcopy(a.vector))
end

function Base.deepcopy_internal(a::SIntMat, dict::IdDict)
    return SIntMat(deepcopy(a.matrix))
end

function Base.deepcopy_internal(a::SBigIntMat, dict::IdDict)
    return SBigIntMat(deepcopy(a.matrix))
end

function Base.deepcopy_internal(a::SListData, dict::IdDict)
    return SListData(deepcopy(a.data))
end

function Base.deepcopy_internal(a::SList, dict::IdDict)
    return SList(deepcopy(a.list))
end


function srcall(f::SProc, v...)
    return f.func(v...)
end

function srcall(a::SName, v...)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        return srcall((sGlobal.fxnstack[n])[a.name], v...)
    end
    if length(sGlobal.currentring.varstack) < n
        # current ring has no variables on our level
        if haskey(sGlobal.fxnstack[1], a.name)
            return srcall((sGlobal.fxnstack[1])[a.name], v...)
        end
    else
        # current ring has variables on our level
        if haskey(sGlobal.currentring.varstack[n], a.name)
            return srcall((sGlobal.currentring.varstack[n])[a.name], v...)
        elseif haskey(sGlobal.currentring.varstack[1], a.name)
            return srcall((sGlobal.currentring.varstack[1])[a.name], v...)
        end
    end
    return SName(Symbol(string(a.name) * "(" * join([srprint(i).string for i in v], ",") * ")")) # TODO intvec
end


# copiers returning SingularType, usually so that we can assign it somewhere
# we have to copy stuff, and sometimes the stuff to copy is allowed to be a tuple
# sr_copy_allow_tuple will be called on stuff inside (), i.e. if the object (a,f(b),c)
# needs to be construted, it might be constructed in julia as
# tuple(a, sr_copy_allow_tuple(f(b))..., c)

# if f(b) returns a tuple t, then sr_copy_allow_tuple(t) will simply return t
# if f(b) returns a SBigIntMat m, then sr_copy_allow_tuple(m) will simply return m and the iterator is trivial
# if f(b) returns a Array{BigInt, 2} m, then sr_copy_allow_tuple(m) makes a deepcopy and returns a SBigIntMat, whose iterator is trivial

# sr_copy: copy with an error on tuples
# sr_copy_allow_tuple: copy everything sr_copy can copy and also allow tuples through

# sr_copy is probably only used internally since anything the transpiler would want to copy could be a tuple

sr_copy(a::Nothing) = a
sr_copy_allow_tuple(a::Nothing) = a

sr_copy(a::SProc) = a
sr_copy_allow_tuple(a::SProc) = a

sr_copy(a::SName) = sr_make(a)
sr_copy_allow_tuple(a::SName) = sr_make(a)

sr_copy(a::Int) = a
sr_copy_allow_tuple(a::Int) = a

sr_copy(a::BigInt) = a
sr_copy_allow_tuple(a::BigInt) = a

sr_copy(a::SString) = a
sr_copy_allow_tuple(a::SString) = a

sr_copy(a::Vector{Int}) = SIntVec(deepcopy(a))
sr_copy(a::SIntVec) = a
sr_copy_allow_tuple(a::Vector{Int}) = SIntVec(deepcopy(a))
sr_copy_allow_tuple(a::SIntVec) = a

sr_copy(a::Array{Int, 2}) = SIntMat(deepcopy(a))
sr_copy(a::SIntMat) = a
sr_copy_allow_tuple(a::Array{Int, 2}) = SIntMat(deepcopy(a))
sr_copy_allow_tuple(a::SIntMat) = a

sr_copy(a::Array{BigInt, 2}) = SBigIntMat(deepcopy(a))
sr_copy(a::SBigIntMat) = a
sr_copy_allow_tuple(a::Array{BigInt, 2}) = SBigIntMat(deepcopy(a))
sr_copy_allow_tuple(a::SBigIntMat) = a

sr_copy(a::SListData) = SList(deepcopy(a))
sr_copy(a::SList) = a
sr_copy_allow_tuple(a::SListData) = SList(deepcopy(a))
sr_copy_allow_tuple(a::SList) = a

sr_copy(a::Tuple{Vararg{Any}}) = error("internal error: The tuple $a leaked through. Please report this.")
sr_copy_allow_tuple(a::Tuple{Vararg{Any}}) = a

# copiers returning non SingularType, usually so that we can mutate it
# only used internally for convenience by the runtime, and should not be output by transpiler

sr_edit(a::Vector{Int}) = deepcopy(a)
sr_edit(a::SIntVec) = a.vector

sr_edit(a::Array{Int, 2}) = deepcopy(a)
sr_edit(a::SIntMat) = a.matrix

sr_edit(a::Array{BigInt, 2}) = deepcopy(a)
sr_edit(a::SBigIntMat) = a.matrix

sr_edit(a::SListData) = deepcopy(a)
sr_edit(a::SList) = a.list

# get the underlying non SingularType

sr_ref(a::Nothing) = a

sr_ref(a::SProc) = a

sr_ref(a::SName) = a

sr_ref(a::Int) = a

sr_ref(a::BigInt) = a

sr_ref(a::SString) = a

sr_ref(a::Vector{Int}) = a
sr_ref(a::SIntVec) = a.vector
sr_ref(a::Array{Int, 2}) = a
sr_ref(a::SIntMat) = a.matrix

sr_ref(a::Array{BigInt, 2}) = a
sr_ref(a::SBigIntMat) = a.matrix

sr_ref(a::SListData) = a
sr_ref(a::SList) = a.list


########### messages ##########################################################

function sr_warn(s::String)
    @warn s
end

function sr_error(s::String)
    @error s
    error("runtime error")
end


########### declarers and default constructors ################################
# each type T has a
#   srparameter_T:          used for putting the arguments of a proc into the new scope
#   sr_declare_T:            may print a warning/error on redeclaration
#   sr_defaultconstructor_T: cannot fail

sr_typetostring(::Nothing)          = "def"
sr_typetostring(::Type{Nothing})    = "def"
sr_typetostring(::Type{SName})   = "?unknown type?"
sr_typetostring(::Type{SProc})      = "proc"
sr_typetostring(::Type{Int})        = "int"
sr_typetostring(::Type{BigInt})     = "bigint"
sr_typetostring(::Type{SString})    = "string"
sr_typetostring(::Type{SIntVec})    = "intvec"
sr_typetostring(::Type{SIntMat})    = "intmat"
sr_typetostring(::Type{SBigIntMat}) = "bigintmat"
sr_typetostring(::Type{SList})      = "list"

function sr_declarewarnerror(d::Dict{Symbol, Any}, x::Symbol, t)
    if d[x] isa t
        sr_warn("redeclaration of " * sr_typetostring(t) * " " * string(x))
    else
        sr_error("identifier " * string(x) *" in use")
    end
end


function sr_defaultconstructor_unknown() # hmm, probably won't be used
    return SName(Symbol(""))
end

#### proc
function sr_empty_proc(v...) # only used by sr_defaultconstructor_proc
    sr_error("empty proc called")
end

function sr_defaultconstructor_proc()
    return SProc(sr_empty_proc, "empty proc")
end

function sr_declare_proc(a::SName)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        sr_declarewarnerror(sGlobal.fxnstack[n], a.name, SProc)
    end
    if length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        sr_declarewarnerror(sGlobal.currentring.varstack[n], a.name, SProc)
    end
    sGlobal.fxnstack[n][a.name] = sr_defaultconstructor_proc()
end

function srparameter_proc(a::SName, b)
    n = length(sGlobal.fxnstack)
    @assert !(haskey(sGlobal.fxnstack[n], a.name))
    @assert !(length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name))
    sGlobal.fxnstack[n][a.name] = sr_convert2proc(b)
end


#### int
function sr_defaultconstructor_int()
    return Int(0)
end

function sr_declare_int(a::SName)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        sr_declarewarnerror(sGlobal.fxnstack[n], a.name, Int)
    end
    if length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        sr_declarewarnerror(sGlobal.currentring.varstack[n], a.name, Int)
    end
    sGlobal.fxnstack[n][a.name] = sr_defaultconstructor_int()
end

function srparameter_int(a::SName, b)
    n = length(sGlobal.fxnstack)
    @assert !(haskey(sGlobal.fxnstack[n], a.name))
    @assert !(length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name))
    sGlobal.fxnstack[n][a.name] = sr_convert2int(b)
end

#### bigint
function sr_defaultconstructor_bigint()
    return BigInt(0)
end

function sr_declare_bigint(a::SName)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        sr_declarewarnerror(sGlobal.fxnstack[n], a.name, BigInt)
    end
    if length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        sr_declarewarnerror(sGlobal.currentring.varstack[n], a.name, BigInt)
    end
    sGlobal.fxnstack[n][a.name] = sr_defaultconstructor_bigint()
end

function srparameter_bigint(a::SName, b)
    n = length(sGlobal.fxnstack)
    @assert !(haskey(sGlobal.fxnstack[n], a.name))
    @assert !(length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name))
    sGlobal.fxnstack[n][a.name] = sr_convert2bigint(b)
end

#### string
function sr_defaultconstructor_string()
    return SString("")
end

function sr_declare_string(a::SName)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        sr_declarewarnerror(sGlobal.fxnstack[n], a.name, String)
    end
    if length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        sr_declarewarnerror(sGlobal.currentring.varstack[n], a.name, String)
    end
    sGlobal.fxnstack[n][a.name] = sr_defaultconstructor_string()
end

function srparameter_string(a::SName, b)
    n = length(sGlobal.fxnstack)
    @assert !(haskey(sGlobal.fxnstack[n], a.name))
    @assert !(length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name))
    sGlobal.fxnstack[n][a.name] = sr_convert2string(b)
end

#### intvec
function sr_defaultconstructor_SIntVec()
    return SIntVec(Int[])
end

#### intmat
function sr_defaultconstructor_intmat()
    return SBigIntMat(zeros(Int, 1, 1))
end

#### bigintmat
function sr_defaultconstructor_bigintmat()
    return SBigIntMat(zeros(BigInt, 1, 1))
end

#### list
function sr_defaultconstructor_list()
    return SList(SListData(Any[]))
end


########### type conversions ##################################################
# each sr_convert2T returns an object of type T, usually for an assignment
# each sr_cast2T is used when the type name T is used as a function, i.e. string(1)

# Singular maintains bools as ints, julia needs real bools for control flow

function sr_asbool(a::Int)
    return a != 0
end

function sr_asbool(a)
    error("expected int for boolean expression")
    return false
end

#### def

function sr_convert2def(a::SingularType)
    return sr_copy(a)
end

function sr_convert2def(a...)
    error("cannot convert $a to a def")
    return a
end


#### proc

function sr_convert2proc(a::SProc)
    return a
end

function sr_convert2proc(a...)
    error("cannot convert $a to a proc")
    return defaultconstructor_proc()
end

#### int

function sr_convert2int(a::Int)
    return a
end

function sr_convert2int(a::BigInt)
    return Int(a)   # will throw if BigInt -> Int conversion fails
end

function sr_convert2int(a...)
    error("cannot convert $a to an int")
    return Int(0)
end

const sr_cast2int = sr_convert2int

#### bigint

function sr_convert2bigint(a::Int)
    return BigInt(a)
end

function sr_convert2bigint(a::BigInt)
    return a
end

function sr_convert2bigint(a...)
    error("cannot convert $a to a bigint")
    return BigInt(0)
end

const sr_cast2bigint = sr_convert2bigint

#### string

function sr_convert2string(a::SString)
    return a
end

function sr_convert2string(a...)
    error("cannot convert $a to a string")
    return SString("")
end

function sr_cast2string(a::Int)
    return SString(string(a))
end

function sr_cast2string(a::SProc)
    return SString("proc "*string(a.name)) #TODO low priority: this is not how singular prints procs
end

function sr_cast2string(a...)
    error("cannot cast $a to a string")
    return SString("")
end

#### intvec

function sr_convert2intvec(a::SIntVec)
    return a
end

function sr_convert2intvec(a::Array{Int})
    return SIntVec(deepcopy(a))
end

function sr_convert2intvec(a::Tuple{Vararg{Any}})
    v = Int[]
    for i in a
        if i isa SIntVec
            append!(v, i.vector)
        else
            push!(v, sr_convert2int(i))
        end
    end
    return SIntVec(v)
end

function sr_convert2intvec(a)
    error("cannot convert to intvec")
    return SIntVec(Int[])
end

#### intmat

function sr_convert2intmat(a::SIntMat)
    return a
end

function sr_convert2intmat(a::Array{Int, 2})
    return SIntMat(deepcopy(a))
end

function sr_convert2intmat(a::Tuple{Vararg{Any}}, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(Int, nrows, ncols)
    row_idx = col_idx = 1
    for i in a
        mat[row_idx, col_idx] = sr_convert2int(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return SIntMat(mat)
end

function sr_convert2intmat(a::_List, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(Int, nrows, ncols)
    row_idx = col_idx = 1
    for i in sref(a).list.data
        mat[row_idx, col_idx] = sr_convert2int(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return SIntMat(mat)
end

#### bigintmat

function sr_convert2bigintmat(a::SBigIntMat)
    return a
end

function sr_convert2bigintmat(a::Array{BigInt, 2})
    return SBigIntMat(deepcopy(a))
end

function sr_convert2bigintmat(a::Tuple{Vararg{Any}}, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(BigInt, nrows, ncols)
    row_idx = col_idx = 1
    for i in a
        mat[row_idx, col_idx] = sr_convert2bigint(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return SBigIntMat(mat)
end

function sr_convert2bigintmat(a::_List, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(BigInt, nrows, ncols)
    row_idx = col_idx = 1
    for i in sref(a).data
        mat[row_idx, col_idx] = i
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return SBigIntMat(mat)
end

#### list

function sr_convert2list(a::SList)
    return a
end

function sr_convert2list(a::SListData)
    return SList(deepcopy(a))
end

function sr_convert2list(a::Tuple{Vararg{Any}})
    return SList(SListData(collect(a)))
end

function sr_convert2list(a)
    error("cannot convert $a to a list")
    return SList(SListData(Any[]))
end

function sr_cast2list(a...)
    return SList(SListData([sr_copy(i) for i in a]))
end




############ printing ##########################################################

function sr_indenting_print(a::Nothing, indent::Int)
    return ""
end

function sr_indenting_print(a::SName, indent::Int)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        return sr_indenting_print(sGlobal.fxnstack[n][a.name], indent)
    elseif length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        return sr_indenting_print(sGlobal.currentring.varstack[n][a.name], indent)
    elseif haskey(sGlobal.fxnstack[1], a.name)
        return sr_indenting_print(sGlobal.fxnstack[1][a.name], indent)
    elseif haskey(sGlobal.currentring.varstack[1], a.name)
        return sr_indenting_print(sGlobal.currentring.varstack[1][a.name], indent)
    else
        return " "^indent * "UNKNOWN IDENTIFIER " * string(a.name)
    end
end

function sr_indenting_print(a::SProc, indent::Int)
    return " "^indent * "procname: " * string(a.name)
end

function sr_indenting_print(a::Union{Int, BigInt}, indent::Int)
    return " "^indent * string(a)
end

function sr_indenting_print(a::SString, indent::Int)
    return " "^indent * a.string
end

function sr_indenting_print(a::Union{_IntMat, _BigIntMat}, indent::Int)
    s = ""
    A = sref(a)
    nrows, ncols = size(A)
    for i in 1:nrows
        s *= " "^indent
        for j in 1:ncols
            s *= string(A[i,j])
            if j < ncols
                s *= ", " # TODO low priority: align columns
            end
        end
        if i < nrows
            s *= ",\n"
        end
    end
    return s;
end

function sr_indenting_print(a::SList, indent::Int)
    return sr_indenting_print(sr_ref(a), indent)
end

function sr_indenting_print(a::SListData, indent::Int)
    s = ""
    A = a.data
    for i in 1:length(A)
        s *= " "^indent * "[" * string(i) * "]:\n"
        if A[i] isa Nothing
            continue
        end
        s *= sr_indenting_print(A[i], indent + 3)
        if i < length(A)
            s *= "\n"
        end
    end
    return s
end

function sr_indenting_print(a::Tuple{Vararg{Any}}, indent::Int)
    s = ""
    for b in a
        s *= sr_indenting_print(b, indent) * "\n"
    end
    return s
end

# the "print" function in Singular returns a string and does not print
function srprint(::Nothing)
    return ""
end

function srprint(a)
    return SString(sr_indenting_print(a, 0))
end

# the semicolon in Singular is the method to actually print something
function sr_printout(::Nothing)
    return  # we will probably be printing nothing often - very important to not print anything in this case
end

function sr_printout(a)
    println(sr_indenting_print(a, 0))
end

# type ...; will call sr_printouttype
function sr_printouttype(a)
    println("add correct type printing here")
end

########### mutatingish operations #############################################

# in general the operation of the assignment a = b in Singular depends on the
# values of a and b Therefore, a = b becomes a = sr_assign(a, b)
#   currently only for intmat and bigintmat a, and when the type of a is not
#   known at transpile time

# The assignment to any variable "a" declared "def" must pass through sr_assign because:
#   (1) The initial value of "a" is nothing
#   (2) The first assignment to "a" with a non-nothing type on the rhs succeeds
#       and essentially determines the type of "a"
#   (3) Future assignments to "a" behave as if "a" had the type in (2)
# Since we don't know if an assignment is the first or not - and even if we did,
# we don't know the type of the rhs - all of this type checking is done by sr_assign


function srassign(a::SName, b)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        sGlobal.fxnstack[n][a.name] = sr_assign(sGlobal.fxnstack[n][a.name], b)
    elseif length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        sGlobal.currentring.varstack[n][a.name] = sr_assign(sGlobal.currentring.varstack[n][a.name], b)
    elseif haskey(sGlobal.fxnstack[1], a.name)
        sGlobal.fxnstack[1][a.name] = sr_assign(sGlobal.fxnstack[1][a.name], b)
    elseif haskey(sGlobal.currentring.varstack[1], a.name)
        sGlobal.currentring.varstack[1][a.name] = sr_assign(sGlobal.currentring.varstack[1][a.name], b)
    else
        _serror(a.name * "is undefined")
    end
    return nothing
end


#### assignment to nothing - used for the first set of a variable of type def
function sr_assign(a::Nothing, b::SingularType)
    return sr_copy(b)
end

#### assignment to proc
function sr_assign(a::SProc, b)
    return sr_convert2proc(b)
end

#### assignment to int
function sr_assign(a::Int, b)
    return sr_convert2int(b)
end

#### assignment to bigint
function sr_assign(a::BigInt, b)
    return sr_convert2bigint(b)
end

#### assignment to intmat
function sr_assign(a::_IntMat, b::_IntMat)
    return sr_copy(b)
end

function sr_assign(a::_IntMat, b::Tuple{Vararg{Any}})
    A = _sedit(a)
    nrows, ncols = size(A)
    row_idx = col_idx = 1
    for i in b
        A[row_idx, col_idx] = sr_convert2int(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return SIntMat(A)
end

function sr_assign(a::_IntMat, b)
    error("cannot assign $a to intmat")
end

#### assignment to bigintmat
function sr_assign(a::_BigIntMat, b::_BigIntMat)
    return sr_copy(b)
end

function sr_assign(a::_BigIntMat, b::Tuple{Vararg{Any}})
    A = _sedit(a)
    nrows, ncols = size(A)
    row_idx = col_idx = 1
    for i in b
        A[row_idx, col_idx] = sr_convert2bigint(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return SBigIntMat(A)
end

function sr_assign(a::_BigIntMat, b)
    error("cannot assign $b to bigintmat")
end

#### assignment to list
function sr_assign(a::_List, b::_List)
    return sr_copy(b)
end

function sr_assign(a::_List, b)
    error("cannot assign $b to bigintmat")
end


function sgetindex(a::_IntVec, i::Int)
    return sref(a)[i]
end

function sr_assignindex(a::_IntVec, i::Int, b)
    sref(a)[i] = sr_copy(b)
    return nothing
end


function sgetindex(a::_BigIntMat, i::Int, j::Int)
    return sref(a)[i, j]
end


function sr_assignindex(a::_BigIntMat, i::Int, j::Int, b)
    sref(a)[i, j] = sr_copy(b)
    return nothing
end


function sgetindex(a::_List, i::Int)
    return sref(sref(a).data[i])
end

function ssetindex(a::_List, i::Int, b)
    bcopy = sr_copy(b) # copy before the possible resize
    r = sref(a).data
    if bcopy == nothing
        if i < length(r)
            r[i] = nothing
        # putting nothing at the end pops the list
        elseif i == length(r)
            pop!(r)
        end
    else
        # nothing fills out a list when we assign past the end
        org_len = length(r)
        if i > org_len
            resize!(r, i)
            while org_len + 1 < i
                r[org_len + 1] = nothing
                org_len += 1
            end
        end
        r[i] = bcopy
    end
    return nothing
end


function sinsert(a::_List, b, i::Int)
    bcopy = sr_copy(b)
    r = _sedit(a);
    if i > length(r.data)
        resize!(r.data, i + 1)
        r.data[i + 1] = bcopy
    else
        insert!(r.data, i + 1, bcopy)
    end
    # TODO: remove nothings on the end?
    return SList(r)
end


function sdelete(a::_List, i::Int)
    r = _sedit(a);
    deleteat!(r.data, i)
    # TODO: remove nothings on the end?
    return SList(r)
end




function sr_incrementby(a::SName, b::Int)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        sGlobal.fxnstack[n][a.name] = srplus(sGlobal.fxnstack[n][a.name], b)
    elseif length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
        sGlobal.currentring.varstack[n][a.name] = srplus(sGlobal.currentring.varstack[n][a.name], b)
    elseif haskey(sGlobal.fxnstack[1], a.name)
        sGlobal.fxnstack[1][a.name] = srplus(sGlobal.fxnstack[1][a.name], b)
    elseif haskey(sGlobal.currentring.varstack[1], a.name)
        sGlobal.currentring.varstack[1][a.name] = srplus(sGlobal.currentring.varstack[1][a.name], b)
    else
        _serror(a.name * "is undefined")
    end
    return nothing
end


function srrtimer()
    t = time_ns()
    if t >= sGlobal.rtimer_base
        return Int(div(t - sGlobal.rtimer_base, sGlobal.rtimer_scale))
    else
        return -Int(div(sGlobal.rtimer_base - t, sGlobal.rtimer_scale))
    end
end

function srsystem(a::SString, b)
    if a.string == "--ticks-per-sec"
        sGlobal.rtimer_scale = div(UInt(1000000000), UInt(abs(sr_convert2int(b))))
    else
        sr_error("system($(a.name), ...) not implemented")
    end
    return nothing
end

################ tuples ########################################################
#
# all splatting is done (hopefully!) at transpile time
#function smaketuple(v...)
#    g = (x isa Tuple ? x : (x,) for x in v)
#    r = tuple(Iterators.flatten(g)...)
#    return r
#end

function sr_checktuplelength(a::Tuple{Vararg{Any}}, n::Int)
    if length(a) != n
        sr_error("expected " * string(n) * " arguments in expression list; got " * string(length(a)))
    end
end


########### operations ##############################################

srtypeof(::Nothing)      = SString("none")
srtypeof(::SName)        = SString("?unknown type?")
srtypeof(::SProc)        = SString("proc")
srtypeof(::Int)          = SString("int")
srtypeof(::BigInt)       = SString("bigint")
srtypeof(::SString)      = SString("string")
srtypeof(::_IntVec)      = SString("intvec")
srtypeof(::_IntMat)      = SString("intmat")
srtypeof(::_BigIntMat)   = SString("bigintmat")
srtypeof(::_List)        = SString("list")


srsize(a::SName) = srsize(sr_make(a))

function srsize(a::Int)
    return Int(a != 0)
end

function srsize(a::BigInt)
    return Int(a.size)
end

function srsize(a::_IntVec)
    return Int(length(sref(a)))
end

function srsize(a::Union{_IntMat, _BigIntMat})
    nrows, ncols = size(sref(a))
    return Int(nrows * ncols)
end

function srsize(a::_List)
    return Int(length(sref(a).data))
end


srplus(a::SName, b::SName) = srplus(sr_make(a), sr_make(b))
srplus(a::SName, b) = srplus(sr_make(a), b)
srplus(a, b::SName) = srplus(a, sr_make(b))

srplus(a::Int, b::Int) = Base.checked_add(a, b)
srplus(a::Int, b::BigInt) = a + b
srplus(a::BigInt, b::Int) = a + b
srplus(a::BigInt, b::BigInt) = a + b

function srplus(a::_List, b::_List)
    return SList(SListData(vcat(_sedit(a).data, _sedit(b).data)))
end

function srplus(a::Tuple{Vararg{Any}}, b::_SingularType)
    return Tuple(i == 1 ? srplus(a[i], b) : a[i] for i in 1:length(a));
end

function srplus(a::_SingularType, b::Tuple{Vararg{Any}})
    return Tuple(i == 1 ? srplus(a, b[i]) : b[i] for i in 1:length(b));
end

function srplus(a::Tuple{Vararg{Any}}, b::Tuple{Vararg{Any}})
    return Tuple(srplus(a[i], b[i]) for i in 1:min(length(a), length(b)));
end

function srplus(a::_IntVec, b::_IntVec)
    A = sref(a)
    B = sref(b)
    return SIntVec([(i <= length(A) ? A[i] : 0) + (i <= length(B) ? B[i] : 0) for i in 1:max(length(A), length(B))])
end

function srplus(a::_IntVec, b::Int)
    A = sref(a)
    return SIntVec([srplus(A[i], b) for i in 1:length(A)])
end

function srplus(a::Int, b::_IntVec)
    B = sref(b)
    return SIntVec([srplus(a, B[i]) for i in 1:length(B)])
end

function srplus(a::_IntMat, b::Int)
    A = _sedit(a)
    nrows, ncols = size(A)
    for i in 1:min(nrows, ncols)
        A[i, i] = srplus(A[i, i], b)
    end
    return SIntMat(A)
end

function srplus(a::Int, b::_IntMat)
    B = _sedit(b)
    nrows, ncols = size(B)
    for i in 1:min(nrows, ncols)
        B[i, i] = srplus(a, B[i, i])
    end
    return SIntMat(B)
end

function srplus(a::_IntMat, b::_IntMat)
    return SIntMat(sref(a) + sref(b))
end

function srplus(a::SString, b::SString)
    return SString(a.string * b.string)
end


srminus(a::SName) = srminus(sr_make(a))

srminus(a::Int) = Base.checked_neg(a)

srminus(a::SName, b::SName) = srminus(sr_make(a), sr_make(b))
srminus(a::SName, b) = srminus(sr_make(a), b)
srminus(a, b::SName) = srminus(a, sr_make(b))

srminus(a::Int, b::Int) = Base.checked_sub(a, b)
srminus(a::Int, b::BigInt) = a - b
srminus(a::BigInt, b::Int) = a - b
srminus(a::BigInt, b::BigInt) = a - b


srtimes(a::SName, b::SName) = srtimes(sr_make(a), sr_make(b))
srtimes(a::SName, b) = srtimes(sr_make(a), b)
srtimes(a, b::SName) = srtimes(a, sr_make(b))

srtimes(a::Int, b::Int) = Base.checked_mul(a, b)
srtimes(a::Int, b::BigInt) = a * b
srtimes(a::BigInt, b::Int) = a * b
srtimes(a::BigInt, b::BigInt) = a * b

function stimes(a::_BigIntMat, b::_BigIntMat)
    return SBigIntMat(sr_ref(a) * sr_ref(b))
end

function stimes(a::Int, b::_BigIntMat)
    return SBigIntMat(a*sr_ref(b))
end


srpower(a::SName, b::SName) = srpower(sr_make(a), sr_make(b))
srpower(a::SName, b) = srpower(sr_make(a), b)
srpower(a, b::SName) = srpower(a, sr_make(b))

srpower(a::Int, b::Int) = a ^ b
srpower(a::Int, b::BigInt) = a ^ b
srpower(a::BigInt, b::Int) = a ^ b
srpower(a::BigInt, b::BigInt) = a ^ b


srdivide(a::SName, b::SName) = srdivide(sr_make(a), sr_make(b))
srdivide(a::SName, b) = srdivide(sr_make(a), b)
srdivide(a, b::SName) = srdivide(a, sr_make(b))

srdivide(a::Int, b::Int) = Base.checked_div(a, b)
srdivide(a::Int, b::BigInt) = div(a, b)
srdivide(a::BigInt, b::Int) = div(a, b)
srdivide(a::BigInt, b::BigInt) = div(a, b)


srmod(a::SName, b::SName) = srmod(sr_make(a), sr_make(b))
srmod(a::SName, b) = srmod(sr_make(a), b)
srmod(a, b::SName) = srmod(a, sr_make(b))

srmod(a::Int, b::Int) = Base.checked_mod(a, b)
srmod(a::Int, b::BigInt) = mod(a, b)
srmod(a::BigInt, b::Int) = mod(a, b)
srmod(a::BigInt, b::BigInt) = mod(a, b)


srequalequal(a::SName, b::SName) = srequalequal(sr_make(a), sr_make(b))
srequalequal(a::SName, b) = srequalequal(sr_make(a), b)
srequalequal(a, b::SName) = srequalequal(a, sr_make(b))

sequalequal(a::Int, b::Int) = Int(a == b)
sequalequal(a::Int, b::BigInt) = Int(a == b)
sequalequal(a::BigInt, b::Int) = Int(a == b)
sequalequal(a::BigInt, b::BigInt) = Int(a == b)
sequalequal(a::SString, b::SString) = Int(a == b)


srless(a::SName, b::SName) = srless(sr_make(a), sr_make(b))
srless(a::SName, b) = srless(sr_make(a), b)
srless(a, b::SName) = srless(a, sr_make(b))

srless(a::Int, b::Int) = Int(a < b)
srless(a::Int, b::BigInt) = Int(a < b)
srless(a::BigInt, b::Int) = Int(a < b)
srless(a::BigInt, b::BigInt) = Int(a < b)


srlessequal(a::SName, b::SName) = srlessequal(sr_make(a), sr_make(b))
srlessequal(a::SName, b) = srlessequal(sr_make(a), b)
srlessequal(a, b::SName) = srlessequal(a, sr_make(b))

srlessequal(a::Int, b::Int) = Int(a <= b)
srlessequal(a::Int, b::BigInt) = Int(a <= b)
srlessequal(a::BigInt, b::Int) = Int(a <= b)
srlessequal(a::BigInt, b::BigInt) = Int(a <= b)


srgreater(a::SName, b::SName) = srgreater(sr_make(a), sr_make(b))
srgreater(a::SName, b) = srgreater(sr_make(a), b)
srgreater(a, b::SName) = srgreater(a, sr_make(b))

srgreater(a::Int, b::Int) = Int(a > b)
srgreater(a::Int, b::BigInt) = Int(a > b)
srgreater(a::BigInt, b::Int) = Int(a > b)
srgreater(a::BigInt, b::BigInt) = Int(a > b)


srgreaterequal(a::SName, b::SName) = srgreaterequal(sr_make(a), sr_make(b))
srgreaterequal(a::SName, b) = srgreaterequal(sr_make(a), b)
srgreaterequal(a, b::SName) = srgreaterequal(a, sr_make(b))

srgreaterequal(a::Int, b::Int) = Int(a >= b)
srgreaterequal(a::Int, b::BigInt) = Int(a >= b)
srgreaterequal(a::BigInt, b::Int) = Int(a >= b)
srgreaterequal(a::BigInt, b::BigInt) = Int(a >= b)



###############################################################################

struct AstNode
    rule::Int32
    child::Vector{Any}
end

function AstNodeMake(h, l...)
    return AstNode(h, [l...])
end

struct TranspileError <: Exception
    name::String
end

mutable struct AstEnv
    in_proc::Bool
    locals::Dict{String, Any}
end

sGlobal_Env = AstEnv(false, Dict{String, Any}())
sGlobal_Proc = Dict{Symbol, SProc}()
sGlobal_NewStructNames = String[]




function sr_make(a::SName)
    n = length(sGlobal.fxnstack)
    if haskey(sGlobal.fxnstack[n], a.name)
        return sr_ref(sGlobal.fxnstack[n][a.name])
    end
    if length(sGlobal.currentring.varstack) < n
        # current ring has no variables on our level
        if haskey(sGlobal.fxnstack[1], a.name)
            return sr_ref(sGlobal.fxnstack[1][a.name])
        end
    else
        # current ring has variables on our level
        if haskey(sGlobal.currentring.varstack[n], a.name)
            return sr_ref(sGlobal.currentring.varstack[n][a.name])
        elseif haskey(sGlobal.currentring.varstack[1], a.name)
            return sr_ref(sGlobal.currentring.varstack[1][a.name])
        end
    end
    error(string(a.name) * " is undefined")
end


function sr_enterfunction()
    push!(sGlobal.fxnstack, Dict{Symbol, Any}())
end

function sr_leavefunction()
    n = length(sGlobal.fxnstack)
    @assert n > 1
    for r in sGlobal.allrings
        while length(r.varstack) >= n
            pop!(r.varstack)
        end
    end
    pop!(sGlobal.fxnstack)
end


Base.showerror(io::IO, er::TranspileError) = print(io, "transpilation error: ", er.name)

macro RULE_top_lines(i)            ;return(100 + i); end
macro RULE_top_pprompt(i)          ;return(200 + i); end
macro RULE_lines(i)                ;return(300 + i); end
macro RULE_pprompt(i)              ;return(400 + i); end
macro RULE_npprompt(i)             ;return(500 + i); end
macro RULE_flowctrl(i)             ;return(600 + i); end
macro RULE_example_dummy(i)        ;return(700 + i); end
macro RULE_command(i)              ;return(800 + i); end
macro RULE_assign(i)               ;return(900 + i); end
macro RULE_elemexpr(i)            ;return(1000 + i); end
macro RULE_exprlist(i)            ;return(1100 + i); end
macro RULE_expr(i)                ;return(1200 + i); end
macro RULE_quote_start(i)         ;return(1300 + i); end
macro RULE_assume_start(i)        ;return(1400 + i); end
macro RULE_quote_end(i)           ;return(1500 + i); end
macro RULE_expr_arithmetic(i)     ;return(1600 + i); end
macro RULE_left_value(i)          ;return(1700 + i); end
macro RULE_extendedid(i)          ;return(1800 + i); end
macro RULE_declare_ip_variable(i) ;return(1900 + i); end
macro RULE_stringexpr(i)          ;return(2000 + i); end
macro RULE_rlist(i)               ;return(2100 + i); end
macro RULE_ordername(i)           ;return(2200 + i); end
macro RULE_orderelem(i)           ;return(2300 + i); end
macro RULE_OrderingList(i)        ;return(2400 + i); end
macro RULE_ordering(i)            ;return(2500 + i); end
macro RULE_mat_cmd(i)             ;return(2600 + i); end
macro RULE_filecmd(i)             ;return(2700 + i); end
macro RULE_helpcmd(i)             ;return(2800 + i); end
macro RULE_examplecmd(i)          ;return(2900 + i); end
macro RULE_exportcmd(i)           ;return(3000 + i); end
macro RULE_killcmd(i)             ;return(3100 + i); end
macro RULE_listcmd(i)             ;return(3200 + i); end
macro RULE_ringcmd1(i)            ;return(3300 + i); end
macro RULE_ringcmd(i)             ;return(3400 + i); end
macro RULE_scriptcmd(i)           ;return(3500 + i); end
macro RULE_setrings(i)            ;return(3600 + i); end
macro RULE_setringcmd(i)          ;return(3700 + i); end
macro RULE_typecmd(i)             ;return(3800 + i); end
macro RULE_ifcmd(i)               ;return(3900 + i); end
macro RULE_whilecmd(i)            ;return(4000 + i); end
macro RULE_forcmd(i)              ;return(4100 + i); end
macro RULE_proccmd(i)             ;return(4200 + i); end
macro RULE_parametercmd(i)        ;return(4300 + i); end
macro RULE_returncmd(i)           ;return(4400 + i); end
macro RULE_procarglist(i)         ;return(4500 + i); end
macro RULE_procarg(i)             ;return(4600 + i); end

@enum CMDS begin
  DOTDOT = 258
  EQUAL_EQUAL
  GE
  LE
  MINUSMINUS
  NOT
  NOTEQUAL
  PLUSPLUS
  COLONCOLON
  ARROW
  GRING_CMD
  BIGINTMAT_CMD
  INTMAT_CMD
  PROC_CMD
  RING_CMD
  BEGIN_RING
  BUCKET_CMD
  IDEAL_CMD
  MAP_CMD
  MATRIX_CMD
  MODUL_CMD
  NUMBER_CMD
  POLY_CMD
  RESOLUTION_CMD
  SMATRIX_CMD
  VECTOR_CMD
  BETTI_CMD
  E_CMD
  FETCH_CMD
  FREEMODULE_CMD
  KEEPRING_CMD
  IMAP_CMD
  KOSZUL_CMD
  MAXID_CMD
  MONOM_CMD
  PAR_CMD
  PREIMAGE_CMD
  VAR_CMD
  VALTVARS
  VMAXDEG
  VMAXMULT
  VNOETHER
  VMINPOLY
  END_RING
  CMD_1
  CMD_2
  CMD_3
  CMD_12
  CMD_13
  CMD_23
  CMD_123
  CMD_M
  ROOT_DECL
  ROOT_DECL_LIST
  RING_DECL
  RING_DECL_LIST
  EXAMPLE_CMD
  EXPORT_CMD
  HELP_CMD
  KILL_CMD
  LIB_CMD
  LISTVAR_CMD
  SETRING_CMD
  TYPE_CMD
  STRINGTOK
  INT_CONST
  UNKNOWN_IDENT
  RINGVAR
  PROC_DEF
  APPLY
  ASSUME_CMD
  BREAK_CMD
  CONTINUE_CMD
  ELSE_CMD
  EVAL
  QUOTE
  FOR_CMD
  IF_CMD
  SYS_BREAK
  WHILE_CMD
  RETURN
  PARAMETER
  QUIT_CMD
  SYSVAR
  UMINUS

  ALIAS_CMD = 1000
  ALIGN_CMD
  ATTRIB_CMD
  BAREISS_CMD
  BIGINT_CMD
  BRANCHTO_CMD
  BRACKET_CMD
  BREAKPOINT_CMD
  CHARACTERISTIC_CMD
  CHARSTR_CMD
  CHAR_SERIES_CMD
  CHINREM_CMD
  CMATRIX_CMD
  CNUMBER_CMD
  CPOLY_CMD
  CLOSE_CMD
  COEFFS_CMD
  COEF_CMD
  COLS_CMD
  CONTENT_CMD
  CONTRACT_CMD
  COUNT_CMD
  CRING_CMD
  DBPRINT_CMD
  DEF_CMD
  DEFINED_CMD
  DEG_CMD
  DEGREE_CMD
  DELETE_CMD
  DENOMINATOR_CMD
  DET_CMD
  DIFF_CMD
  DIM_CMD
  DIVISION_CMD
  DUMP_CMD
  ELIMINATION_CMD
  END_GRAMMAR
  ENVELOPE_CMD
  ERROR_CMD
  EXECUTE_CMD
  EXPORTTO_CMD
  EXTGCD_CMD
  FAC_CMD
  FAREY_CMD
  FIND_CMD
  FACSTD_CMD
  FMD_CMD
  FRES_CMD
  FWALK_CMD
  FGLM_CMD
  FGLMQUOT_CMD
  FINDUNI_CMD
  GCD_CMD
  GETDUMP_CMD
  HIGHCORNER_CMD
  HILBERT_CMD
  HOMOG_CMD
  HRES_CMD
  IMPART_CMD
  IMPORTFROM_CMD
  INDEPSET_CMD
  INSERT_CMD
  INT_CMD
  INTDIV_CMD
  INTERPOLATE_CMD
  INTERRED_CMD
  INTERSECT_CMD
  INTVEC_CMD
  IS_RINGVAR
  JACOB_CMD
  JANET_CMD
  JET_CMD
  KBASE_CMD
  KERNEL_CMD
  KILLATTR_CMD
  KRES_CMD
  LAGSOLVE_CMD
  LEAD_CMD
  LEADCOEF_CMD
  LEADEXP_CMD
  LEADMONOM_CMD
  LIFTSTD_CMD
  LIFT_CMD
  LINK_CMD
  LIST_CMD
  LOAD_CMD
  LRES_CMD
  LU_CMD
  LUI_CMD
  LUS_CMD
  MEMORY_CMD
  MINBASE_CMD
  MINOR_CMD
  MINRES_CMD
  MODULO_CMD
  MONITOR_CMD
  MPRES_CMD
  MRES_CMD
  MSTD_CMD
  MULTIPLICITY_CMD
  NAMEOF_CMD
  NAMES_CMD
  NCALGEBRA_CMD
  NC_ALGEBRA_CMD
  NEWTONPOLY_CMD
  NPARS_CMD
  NUMERATOR_CMD
  NVARS_CMD
  ORD_CMD
  OPEN_CMD
  OPPOSE_CMD
  OPPOSITE_CMD
  OPTION_CMD
  ORDSTR_CMD
  PACKAGE_CMD
  PARDEG_CMD
  PARENT_CMD
  PARSTR_CMD
  PFAC_CMD
  PRIME_CMD
  PRINT_CMD
  PRUNE_CMD
  QHWEIGHT_CMD
  QRING_CMD
  QRDS_CMD
  QUOTIENT_CMD
  RANDOM_CMD
  RANK_CMD
  READ_CMD
  REDUCE_CMD
  REGULARITY_CMD
  REPART_CMD
  RES_CMD
  RESERVEDNAME_CMD
  RESTART_CMD
  RESULTANT_CMD
  RINGLIST_CMD
  RING_LIST_CMD
  ROWS_CMD
  SBA_CMD
  SIMPLEX_CMD
  SIMPLIFY_CMD
  SLIM_GB_CMD
  SORTVEC_CMD
  SQR_FREE_CMD
  SRES_CMD
  STATUS_CMD
  STD_CMD
  STRING_CMD
  SUBST_CMD
  SYSTEM_CMD
  SYZYGY_CMD
  TENSOR_CMD
  TEST_CMD
  TRANSPOSE_CMD
  TRACE_CMD
  TWOSTD_CMD
  TYPEOF_CMD
  UNIVARIATE_CMD
  UNLOAD_CMD
  URSOLVE_CMD
  VANDER_CMD
  VARIABLES_CMD
  VARSTR_CMD
  VDIM_CMD
  WAIT1ST_CMD
  WAITALL_CMD
  WEDGE_CMD
  WEIGHT_CMD
  WRITE_CMD

  VECHO
  VCOLMAX
  VTIMER
  VRTIMER
  TRACE
  VOICE
  VSHORTOUT
  VPRINTLEVEL

  MAX_TOK
end




function astprint(a::Int, indent::Int)
    print(" "^indent);
    println(a);
end

function astprint(a::String, indent::Int)
    print(" "^indent);
    println(a);
end

function astprint(a::AstNode, indent::Int)
    print(" "^indent)
    if 100 < a.rule < 200
        print("RULE_top_lines ")
    elseif 200 < a.rule < 300
        print("RULE_top_pprompt ")
    elseif 300 < a.rule < 400
        print("RULE_lines ")
    elseif 400 < a.rule < 500
        print("RULE_pprompt ")
    elseif 500 < a.rule < 600
        print("RULE_npprompt ")
    elseif 600 < a.rule < 700
        print("RULE_flowctrl ")
    elseif 700 < a.rule < 800
        print("RULE_example_dummy ")
    elseif 800 < a.rule < 900
        print("RULE_command ")
    elseif 900 < a.rule < 1000
        print("RULE_assign ")
    elseif 1000 < a.rule < 1100
        print("RULE_elemexpr ")
    elseif 1100 < a.rule < 1200
        print("RULE_exprlist ")
    elseif 1200 < a.rule < 1300
        print("RULE_expr ")
    elseif 1300 < a.rule < 1400
        print("RULE_quote_start ")
    elseif 1400 < a.rule < 1500
        print("RULE_assume_start ")
    elseif 1500 < a.rule < 1600
        print("RULE_quote_end ")
    elseif 1600 < a.rule < 1700
        print("RULE_expr_arithmetic ")
    elseif 1700 < a.rule < 1800
        print("RULE_left_value ")
    elseif 1800 < a.rule < 1900
        print("RULE_extendedid ")
    elseif 1900 < a.rule < 2000
        print("RULE_declare_ip_variable ")
    elseif 2000 < a.rule < 2100
        print("RULE_stringexpr ")
    elseif 2100 < a.rule < 2200
        print("RULE_rlist ")
    elseif 2200 < a.rule < 2300
        print("RULE_ordername ")
    elseif 2300 < a.rule < 2400
        print("RULE_orderelem ")
    elseif 2400 < a.rule < 2500
        print("RULE_OrderingList ")
    elseif 2500 < a.rule < 2600
        print("RULE_ordering ")
    elseif 2600 < a.rule < 2700
        print("RULE_mat_cmd ")
    elseif 2700 < a.rule < 2800
        print("RULE_filecmd ")
    elseif 2800 < a.rule < 2900
        print("RULE_helpcmd ")
    elseif 2900 < a.rule < 3000
        print("RULE_examplecmd ")
    elseif 3000 < a.rule < 3100
        print("RULE_exportcmd ")
    elseif 3100 < a.rule < 3200
        print("RULE_killcmd ")
    elseif 3200 < a.rule < 3300
        print("RULE_listcmd ")
    elseif 3300 < a.rule < 3400
        print("RULE_ringcmd1 ")
    elseif 3400 < a.rule < 3500
        print("RULE_ringcmd ")
    elseif 3500 < a.rule < 3600
        print("RULE_scriptcmd ")
    elseif 3600 < a.rule < 3700
        print("RULE_setrings ")
    elseif 3700 < a.rule < 3800
        print("RULE_setringcmd ")
    elseif 3800 < a.rule < 3900
        print("RULE_typecmd ")
    elseif 3900 < a.rule < 4000
        print("RULE_ifcmd ")
    elseif 4000 < a.rule < 4100
        print("RULE_whilecmd ")
    elseif 4100 < a.rule < 4200
        print("RULE_forcmd ")
    elseif 4200 < a.rule < 4300
        print("RULE_proccmd ")
    elseif 4300 < a.rule < 4400
        print("RULE_parametercmd ")
    elseif 4400 < a.rule < 4500
        print("RULE_returncmd ")
    elseif 4500 < a.rule < 4600
        print("RULE_procarglist ")
    elseif 4600 < a.rule < 4700
        print("RULE_procarg ")
    else
        print("unknown ")
    end
    println(a.rule);
    for i in 1:length(a.child)
        astprint(a.child[i], indent + 4)
    end
end


function convert_extendedid(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_extendedid(0) < 100
    if a.rule == @RULE_extendedid(1)
        return makeunknown(a.child[1]::String)
    else
        throw(TranspileError("internal error in convert_extendedid"))
    end
end

function we_know_splat_is_trivial(a)
    if a isa Expr && a.head == :call && length(a.args) == 2 &&
                            (a.args[1] == :sr_make || a.args[1] == :sr_ref)
        return true
    elseif a isa SName
        return true
    elseif a isa Int
        return true
    else
        return false
    end
end



# return array of generating non necessarily SingularTypes
#   useful probably only for passing to procs, where the values will be copied to new locations
# will not generate names!
# return is Array{Any}
function make_tuple_array_nocopy(a::Array{Any})
    r = Any[]
    for i in 1:length(a)
        if isa(a[i], Expr) && a[i].head == :tuple
            append!(r, a[i].args)   # each of a[i].args should already be copied and splatted
        elseif isa(a[i], SName)
            push!(r, Expr(:call, :sr_make, a[i]))
        elseif we_know_splat_is_trivial(a[i])
            push!(r, a[i])
        else
            push!(r, Expr(:(...), Expr(:call, :sr_copy_allow_tuple, a[i])))
        end
    end
    return r
end

function make_nocopy(a)
    if isa(a, SName)
        return Expr(:call, :sr_make, a)
    else
        return a
    end
end


# return array generating SingularTypes, can construct a singular tuple with Expr(:tuple, ...)
# will not generate names!
# return is Array{Any}
function make_tuple_array_copy(a::Array{Any})
    r = Any[]
    for i in 1:length(a)
        if isa(a[i], Expr) && a[i].head == :tuple
            append!(r, a[i].args)   # each of a[i].args should already be copied and splatted
        elseif isa(a[i], SName)
            push!(r, Expr(:call, :sr_copy, Expr(:call, :sr_make, a[i])))
        elseif we_know_splat_is_trivial(a[i])
            push!(r, Expr(:call, :sr_copy, a[i]))
        else
            push!(r, Expr(:(...), Expr(:call, :sr_copy_allow_tuple, a[i]))) # TODO opt: splat can be avoided somtimes
        end
    end
    return r
end

function make_copy(a)
    if isa(a, SName)
        return Expr(:call, :sr_copy, Expr(:call, :sr_make, a))
    else
        return a
    end
end


function convert_stringexpr(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_stringexpr(0) < 100
    return SString(a.child[1])
end


const newstructprefix    = "SNewStruct_"
const newstructrefprefix = "SNewStructRef_"

function convert_typestring_tosymbol(s::String)
    if s == "proc"
        return :SProc
    elseif s == "int"
        return :Int
    elseif s == "bigint"
        return :BigInt
    elseif s == "string"
        return :SString
    elseif s == "intvec"
        return :Intvec
    elseif s == "intmat"
        return :SIntMat
    elseif s == "bigintmat"
        return :SBigIntMat
    elseif s == "list"
        return :SList
    else
        return Symbol(newstructprefix * s)
    end
end

function filter_lineno(ex::Expr)
   filter!(ex.args) do e
       isa(e, LineNumberNode) && return false
       if isa(e, Expr)
           (e::Expr).head === :line && return false
           filter_lineno(e::Expr)
       end
       return true
   end
   return ex
end


function convert_newstruct_decl(newtypename::String, args::String)
    sp = split(args, ",")
    sp = [filter!(x->x != "", split(i," ")) for i in sp]
    newreftype  = Symbol(newstructrefprefix * newtypename)
    newtype     = Symbol(newstructprefix * newtypename)

    r = Expr(:block)

    # struct definition
    b = Expr(:block)
    for i in sp
        length(i) == 2 || throw(TranspileError("invalid newstruct"))
        push!(b.args, Expr(:(::), Symbol(i[2]), convert_typestring_tosymbol(String(i[1]))))
    end
    push!(r.args, Expr(:struct, true, newreftype, b))

    b = Expr(:block, Expr(:(::), :data, newreftype))
    push!(r.args, Expr(:struct, false, newtype, b))

    # deepcopy
    dpcpi = Expr(:(.), :Base, QuoteNode(:deepcopy_internal))
    idict = Expr(:(::), :dict, :IdDict)
    c = Expr(:call, newreftype)
    for i in sp
        push!(c.args, Expr(:call, :deepcopy, Expr(:(.), :f, QuoteNode(Symbol(i[2])))))
    end
    push!(r.args, Expr(:function, Expr(:call, dpcpi, Expr(:(::), :f, newreftype), idict),
        Expr(:return, c)
    ))

    push!(r.args, Expr(:function, Expr(:call, dpcpi, Expr(:(::), :f, newtype), idict),
        Expr(:return,
            Expr(:call, newtype,
                Expr(:call, :deepcopy,
                    Expr(:(.), :f, QuoteNode(:data))
                )
            )
        )
    ))

    # sr_copy
    push!(r.args, Expr(:function, Expr(:call, :sr_copy, Expr(:(::), :f, newreftype)),
        Expr(:return, Expr(:call, newtype, Expr(:call, :deepcopy, :f)))
    ))

    push!(r.args, Expr(:function, Expr(:call, :sr_copy, Expr(:(::), :f, newtype)),
        Expr(:return, :f)
    ))

    push!(r.args, Expr(:function, Expr(:call, :sr_copy_allow_tuple, Expr(:(::), :f, newreftype)),
        Expr(:return, Expr(:call, newtype, Expr(:call, :deepcopy, :f)))
    ))

    push!(r.args, Expr(:function, Expr(:call, :sr_copy_allow_tuple, Expr(:(::), :f, newtype)),
        Expr(:return, :f)
    ))

    # sr_ref
    push!(r.args, Expr(:function, Expr(:call, :sr_ref, Expr(:(::), :f, newreftype)),
        Expr(:return, :f)
    ))

    push!(r.args, Expr(:function, Expr(:call, :sr_ref, Expr(:(::), :f, newtype)),
        Expr(:return, Expr(:(.), :f, QuoteNode(:data)))
    ))

    # sr_convert2T
    push!(r.args, Expr(:function, Expr(:call, Symbol("sr_convert2"*newtypename), Expr(:(::), :f, newreftype)),
        Expr(:return, Expr(:call, newtype, Expr(:call, :deepcopy, :f)))
    ))

    push!(r.args, Expr(:function, Expr(:call, Symbol("sr_convert2"*newtypename), Expr(:(::), :f, newtype)),
        Expr(:return, :f)
    ))

    push!(r.args, Expr(:function, Expr(:call, Symbol("sr_convert2"*newtypename), :f),
        Expr(:call, :error, "cannot convert to a " * newtypename * " from ", :f)
    ))

    # sr_cast2T
    c = Expr(:call, Symbol("sr_cast2"*newtypename))
    d = Expr(:call, newreftype)
    for i in sp
        push!(c.args, Symbol(i[2]))
        push!(d.args, Expr(:call, Symbol("sr_convert2"*i[1]), Symbol(i[2])))
    end
    push!(r.args, Expr(:function, c, Expr(:return, Expr(:call, newtype, d))))

    push!(r.args, Expr(:function, Expr(:call, Symbol("sr_cast2"*newtypename), Expr(:(...), :f)),
        Expr(:call, :error, "cannot construct a " * newtypename * " from ", :f)
    ))

    # sr_defaultconstructor_T
    d = Expr(:call, newreftype)
    for i in sp
        push!(d.args, Expr(:call, Symbol("sr_defaultconstructor_"*i[1])))
    end
    push!(r.args, Expr(:function, Expr(:call, Symbol("sr_defaultconstructor_"*newtypename)),
        Expr(:return, Expr(:call, newtype, d))
    ))    

    # sr_declare_T   
    push!(r.args, Expr(:function, Expr(:call, Symbol("sr_declare_"*newtypename), Expr(:(::), :a, :SName)),
        filter_lineno(quote
            n = length(sGlobal.fxnstack)
            if haskey(sGlobal.fxnstack[n], a.name)
                sr_declarewarnerror(sGlobal.fxnstack[n], a.name, $(newtype))
            end
            if length(sGlobal.currentring.varstack) >= n && haskey(sGlobal.currentring.varstack[n], a.name)
                sr_declarewarnerror(sGlobal.currentring.varstack[n], a.name, $(newtype))
            end
            sGlobal.fxnstack[n][a.name] = $(Symbol("sr_defaultconstructor_"*newtypename))()
        end)
    ))

    # srparameter_T
    push!(r.args, Expr(:function, Expr(:call, Symbol("srparameter_"*newtypename), Expr(:(::), :a, :SName), :b),
        filter_lineno(quote
            n = length(sGlobal.fxnstack)
            sGlobal.fxnstack[n][a.name] = $(Symbol("sr_convert2"*newtypename))(b)
        end)
    ))

    # sr_assign  - all errors should be handled by sr_convert2something
    push!(r.args, Expr(:function, Expr(:call, :sr_assign,
                                        Expr(:(::), :a, Expr(:curly, :Union, newtype, newreftype)),
                                        :b),
        Expr(:return, Expr(:call, Symbol("sr_convert2"*newtypename), :b))
    ))

    # print
    b = Expr(:block, Expr(:(=), :s, ""))
    for i in 1:length(sp)
        push!(b.args, Expr(:(*=), :s, Expr(:call, :(*), Expr(:call, :(^), " ", :indent), "." * sp[i][2] * ":\n")))
        push!(b.args, Expr(:(*=), :s, Expr(:call, :sr_indenting_print, Expr(:(.), :f, QuoteNode(Symbol(sp[i][2]))), Expr(:call, :(+), :indent, 3))))
        if i < length(sp)
            push!(b.args, Expr(:(*=), :s, "\n"))
        end
    end
    push!(b.args, Expr(:return, :s))
    push!(r.args, Expr(:function, Expr(:call, :sr_indenting_print,
                                                Expr(:(::), :f, newreftype),
                                                Expr(:(::), :indent, :Int)),
        b
    ))

    push!(r.args, Expr(:function, Expr(:call, :sr_indenting_print,
                                                Expr(:(::), :f, newtype),
                                                Expr(:(::), :indent, :Int)),
        Expr(:return, Expr(:call, :sr_indenting_print, Expr(:(.), :f, QuoteNode(:data)), :indent))
    ))

    # srtypeof
    push!(r.args, Expr(:function, Expr(:call, :srtypeof,
                                        Expr(:(::), :f, Expr(:curly, :Union, newtype, newreftype))),
        Expr(:return, Expr(:call, :SString, newtypename))
    ))

    push!(r.args, Expr(:function, Expr(:call, :sr_typetostring,
                                        Expr(:(::), Expr(:curly, :Type, newtype))),
        Expr(:return, newtypename)        
    ))

    push!(r.args, :nothing)
    return r
end

function convert_elemexpr(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_elemexpr(0) < 100
    if a.rule == @RULE_elemexpr(2)
        return convert_extendedid(a.child[1], env)
    elseif a.rule == @RULE_elemexpr(4)
        c = a.child[2]
        c.child[1].rule == @RULE_extendedid(1) || throw(TranspileError("rhs of dot is no good"))
        s = c.child[1].child[1]::String
        b = convert_expr(a.child[1], env)
        if !(b isa Expr && b.head == :call && length(b.args) == 2 && b.args[1] == :sr_make)
            b = Expr(:call, :sr_ref, b)
        end
        return Expr(:call, :sr_ref, Expr(:(.), b, QuoteNode(Symbol(s))))
    elseif a.rule == @RULE_elemexpr(6) || a.rule == @RULE_elemexpr(5)
        if a.rule == @RULE_elemexpr(6)
            b = convert_exprlist(a.child[2], env)::Array{Any}
        else
            b = Any[]
        end
        c = a.child[1]
        return Expr(:call, :srcall, convert_elemexpr(c, env), make_tuple_array_nocopy(b)...)
    elseif a.rule == @RULE_elemexpr(8)
        x = parse(BigInt, a.child[1])
        if typemin(Int) <= x <= typemax(Int)
            return Int(x)
        else
            return x
        end
    elseif a.rule == @RULE_elemexpr(9)
        t = a.child[1]::Int
        if t == Int(VRTIMER)
            return Expr(:call, :srrtimer)
        else
            throw(TranspileError("internal error in convert_elemexpr 9"))
        end
    elseif a.rule == @RULE_elemexpr(10)
        return convert_stringexpr(a.child[1], env)
    elseif a.rule == @RULE_elemexpr(12)
        b = convert_expr(a.child[2], env)
        t = a.child[1]::Int
        if t == Int(INT_CMD)
            return Expr(:call, :sr_cast2int, make_nocopy(b))
        elseif t == Int(BIGINT_CMD)
            return Expr(:call, :sr_cast2bigint, make_nocopy(b))
        else
            throw(TranspileError("internal error in convert_elemexpr 12"))
        end
    elseif a.rule == @RULE_elemexpr(13)
        t = a.child[1]::Int
        if t == Int(LIST_CMD)
            b = convert_exprlist(a.child[2], env)::Array{Any}
            return Expr(:call, :sr_cast2list, make_tuple_array_nocopy(b)...)
        elseif t == Int(STRING_CMD)
            b = convert_exprlist(a.child[2], env)::Array{Any}
            return Expr(:call, :sr_cast2string, make_tuple_array_nocopy(b)...)
        else
            throw(TranspileError("internal error in convert_elemexpr 13"))
        end
    elseif a.rule == @RULE_elemexpr(18)
        t = a.child[1]::Int
        if t == Int(TYPEOF_CMD)
            return Expr(:call, :srtypeof, convert_expr(a.child[2], env))
        elseif t == Int(COUNT_CMD)
            return Expr(:call, :ssize, convert_expr(a.child[2], env))
        else
            throw(TranspileError("internal error in convert_elemexpr 18"))
        end
    elseif a.rule == @RULE_elemexpr(19)
        t = a.child[1]::Int
        if t == Int(PRINT_CMD)
            return Expr(:call, :srprint, convert_expr(a.child[2], env))
        else
            throw(TranspileError("internal error in convert_elemexpr 19"))
        end
        return convert_expr(a.child(2))
    elseif a.rule == @RULE_elemexpr(30) || a.rule == @RULE_elemexpr(31)
        if a.rule == @RULE_elemexpr(31)
            b = convert_exprlist(a.child[2], env)::Array{Any}
        else
            b = Any[]
        end
        t = a.child[1]::Int
        if t == Int(SYSTEM_CMD)            
            return Expr(:call, :srsystem, make_tuple_array_nocopy(b)...)
        else
            throw(TranspileError("internal error in convert_elemexpr 30|31"))
        end
    elseif a.rule == @RULE_elemexpr(99)
        return convert_newstruct_decl(a.child[1], a.child[2])
    elseif a.rule == @RULE_elemexpr(37)
        b = convert_exprlist(a.child[1], env)
        if length(b) == 1
            return make_copy(b[1])
        else
            return Expr(:tuple, make_tuple_array_copy(b)...)
        end
    else
        throw(TranspileError("internal error in convert_elemexpr"*string(a.rule)))
    end  
end


function convert_expr_arithmetic_incdec(a::AstNode, b::Int, env::AstEnv)
    lhs::Array{AstNode} = AstNode[]
    r = Expr(:block)
    if a.rule == @RULE_expr(2) && a.child[1].rule == @RULE_elemexpr(37)
        push_exprlist_expr!(lhs, a.child[1].child[1], env)
    else
        push!(lhs, a)
    end
    for i in 1:length(lhs)
        push_incrementby!(r, lhs[i], b, env)
    end
    push!(r.args, :nothing)
    return r
end

function convert_expr_arithmetic(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_expr_arithmetic(0) < 100
    if a.rule == @RULE_expr_arithmetic(1)
        return convert_expr_arithmetic_incdec(a.child[1], 1, env);
    elseif a.rule == @RULE_expr_arithmetic(2)
        return convert_expr_arithmetic_incdec(a.child[1], -1, env);
    elseif a.rule == @RULE_expr_arithmetic(3)
        return Expr(:call, :srplus, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(4)
        return Expr(:call, :srminus, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(5)
        return Expr(:call, :srtimes, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(6)
        return Expr(:call, :srmod, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(7)
        return Expr(:call, :srdivide, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(8)
        return Expr(:call, :srpower, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(9)
        return Expr(:call, :srgreaterequal, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(10)
        return Expr(:call, :srlessequal, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(11)
        return Expr(:call, :srgreater, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(12)
        return Expr(:call, :srless, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(13)
        return Expr(:call, :srand, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(14)
        return Expr(:call, :sror, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(15)
        return Expr(:call, :srnotequal, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(16)
        return Expr(:call, :srequalequal, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(17)
        return Expr(:call, :srdotdot, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(18)
        return Expr(:call, :srcolon, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(19)
        return Expr(:call, :srnot, convert_expr(a.child[1], env))
    elseif a.rule == @RULE_expr_arithmetic(20)
        return Expr(:call, :srminus, convert_expr(a.child[1], env))
    else
        throw(TranspileError("internal error in convert_expr_arithmetic "))
    end
end


function convert_expr(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_expr(0) < 100
    if a.rule == @RULE_expr(1)
        return convert_expr_arithmetic(a.child[1], env)
    elseif a.rule == @RULE_expr(2)
        return convert_elemexpr(a.child[1], env)
    elseif a.rule == @RULE_expr(3)
        return Expr(:call, :sgetindex, convert_expr(a.child[1], env), convert_expr(a.child[2], env), convert_expr(a.child[3], env))
    elseif a.rule == @RULE_expr(4)
        return Expr(:call, :sgetindex, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    else
        throw(TranspileError("internal error in convert_expr"))
    end
end

# return is a Array{Any}
function convert_exprlist(a::AstNode, env::AstEnv)
    r = Any[]
    for i = 1:length(a.child)
        push!(r, convert_expr(a.child[i], env))
    end
    return r
end


function convert_returncmd(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_returncmd(0) < 100
    if a.rule == @RULE_returncmd(1)
        b::Array{Any} = convert_exprlist(a.child[1], env)
        t = gensym()
        r = Expr(:block)
        if length(b) == 1
            push!(r.args, Expr(:(=), t, make_copy(b[1])))
        else
            push!(r.args, Expr(:(=), t, Expr(:tuple, make_tuple_array_copy(b)...)))
        end
        push!(r.args, Expr(:call, :sr_leavefunction))
        push!(r.args, Expr(:return, t))
        return r;
    elseif a.rule == @RULE_returncmd(2)
        return Expr(:return, :nothing)
    else
        throw(TranspileError("internal error in convert_returncmd"))
    end
end

coerce_for_assign(::Nothing, a::Nothing)                = a
coerce_for_assign(::Nothing, a)                         = Expr(:call, :sr_convert2def, a)
coerce_for_assign(::Type{SProc}, a::SProc)              = a
coerce_for_assign(::Type{SProc}, a)                     = Expr(:call, :sr_convert2proc, a)
coerce_for_assign(::Type{Int}, a::Int)                  = a
coerce_for_assign(::Type{Int}, a)                       = Expr(:call, :sr_convert2int, a)
coerce_for_assign(::Type{BigInt}, a::BigInt)            = a
coerce_for_assign(::Type{BigInt}, a::Int)               = BigInt(a)
coerce_for_assign(::Type{BigInt}, a)                    = Expr(:call, :sr_convert2bigint, a)
coerce_for_assign(::Type{SString}, a::SString)          = a
coerce_for_assign(::Type{SString}, a)                   = Expr(:call, :sr_convert2string, a)
coerce_for_assign(::Type{SIntVec}, a::SIntVec)          = a
coerce_for_assign(::Type{SIntVec}, a)                   = Expr(:call, :sr_convert2intvec, a)
coerce_for_assign(::Type{SIntMat}, a::SIntMat)          = a
coerce_for_assign(::Type{SIntMat}, a)                   = Expr(:call, :sr_convert2intmat, a)
coerce_for_assign(::Type{SBigIntMat}, a::SBigIntMat)    = a
coerce_for_assign(::Type{SBigIntMat}, a)                = Expr(:call, :sr_convert2bigintmat, a)
coerce_for_assign(::Type{SList}, a::SList)              = a
coerce_for_assign(::Type{SList}, a)                     = Expr(:call, :sr_convert2list, a)


stype_string(s::Symbol)          = String(s)
stype_string(::Nothing)          = "def"
stype_string(::Type{SName})      = "?unknown type?"
stype_string(::Type{SProc})      = "proc"
stype_string(::Type{Int})        = "int"
stype_string(::Type{BigInt})     = "bigint"
stype_string(::Type{SString})    = "string"
stype_string(::Type{SIntVec})    = "intvec"
stype_string(::Type{SIntMat})    = "intmat"
stype_string(::Type{SBigIntMat}) = "bigintmat"
stype_string(::Type{SList})      = "list"

function assignment_to_symbol(left::Symbol, right, typ, env::AstEnv)
    if typ == SIntMat || typ == SBigIntMat || typ == nothing
        Expr(:(=), left, Expr(:call, :sr_assign, left, right))
    else
        Expr(:(=), left, coerce_for_assign(typ, right))
    end
end



function push_incrementby!(out::Expr, left::AstNode, right::Int, env::AstEnv)
    if left.rule == @RULE_expr(2) || left.rule == @RULE_elemexpr(2)
        a::AstNode = left.rule == @RULE_expr(2) ? left.child[1] : left
        @assert 0 < a.rule - @RULE_elemexpr(0) < 100
        if a.rule == @RULE_elemexpr(2)
            b = a.child[1]::AstNode
            @assert 0 < b.rule - @RULE_extendedid(0) < 100
            if b.rule == @RULE_extendedid(1)
                push!(out.args, Expr(:call, :sr_incrementby, makeunknown(b.child[1]::String), right))
            else
                throw(TranspileError("cannot increment lhs"))
            end
        elseif a.rule == @RULE_elemexpr(4)
            b = convert_expr(a.child[1], env)
            c = a.child[2]
            c.child[1].rule == @RULE_extendedid(1) || throw(TranspileError("rhs of dot in assignment is no good"))
            s = c.child[1].child[1]::String
            t = gensym()
            if isa(b, SName)
                push!(out.args, Expr(:(=), t, Expr(:call, :sr_make, b)))    # make returns a reference
            else
                push!(out.args, Expr(:(=), t, Expr(:call, :sr_ref, b)))
            end
            b = Expr(:(.), t, QuoteNode(Symbol(s)))
            push!(out.args, Expr(:(=), b, Expr(:call, :srplus, b, right)))
        else
            throw(TranspileError("cannot increment lhs"))
        end
    elseif left.rule == @RULE_expr(3)
        throw(TranspileError("cannot increment lhs"))
    elseif left.rule == @RULE_expr(4)
        throw(TranspileError("cannot increment lhs"))
    else
        throw(TranspileError("cannot increment lhs"))
    end
end

function push_assignment!(out::Expr, left::AstNode, right, env::AstEnv)
    if left.rule == @RULE_expr(2) || left.rule == @RULE_elemexpr(2)
        a::AstNode = left.rule == @RULE_expr(2) ? left.child[1] : left
        @assert 0 < a.rule - @RULE_elemexpr(0) < 100
        if a.rule == @RULE_elemexpr(2)
            b = a.child[1]::AstNode
            @assert 0 < b.rule - @RULE_extendedid(0) < 100
            if b.rule == @RULE_extendedid(1)
                var = b.child[1]::String
                push!(out.args, Expr(:call, :srassign, SName(Symbol(var)), right))
            else
                throw(TranspileError("cannot assign to lhs"))
            end
        elseif a.rule == @RULE_elemexpr(4)
            b = convert_expr(a.child[1], env)
            c = a.child[2]
            c.child[1].rule == @RULE_extendedid(1) || throw(TranspileError("rhs of dot in assignment is no good"))
            s = c.child[1].child[1]::String
            if !(b isa Expr && b.head == :call && length(b.args) == 2 && b.args[1] == :sr_make)
                b = Expr(:call, :sr_ref, b)
            end
            b = Expr(:(.), b, QuoteNode(Symbol(s)))
            push!(out.args, Expr(:(=), b, Expr(:call, :sr_assign, b, right)))
        else
            throw(TranspileError("cannot assign to lhs"))
        end
    elseif left.rule == @RULE_expr(3)
        push!(out.args, Expr(:call, :ssetindex, convert_expr(left.child[1], env),
                                                convert_expr(left.child[2], env), # no sr_copy needed, runtime error if not int
                                                convert_expr(left.child[3], env), # no sr_copy needed, runtime error if not int
                                                right))
    elseif left.rule == @RULE_expr(4)
        push!(out.args, Expr(:call, :ssetindex, convert_expr(left.child[1], env),
                                                convert_expr(left.child[2], env), # no sr_copy needed, runtime error if not int
                                                right))
    else
        throw(TranspileError("cannot assign to lhs"))
    end
end

# recursive helper to flatten out exprlist
function push_exprlist_expr!(l::Array{AstNode}, a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_exprlist(0) < 100
    for i in a.child
        if i.rule == @RULE_expr(2) && i.child[1].rule == @RULE_elemexpr(37)
            push_exprlist_expr!(l, i.child[1].child[1], env)
        else
            push!(l, i)
        end
    end
end

# return is a block
function convert_assign(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_assign(0) < 100
    if a.rule == @RULE_assign(1)
        left::AstNode = a.child[1];
        lhs::Array{AstNode} = AstNode[]
        rhs::Array{Any} = convert_exprlist(a.child[2], env)
        r = Expr(:block)
        if left.rule == @RULE_left_value(1)
            r = convert_declare_ip_variable!(lhs, left.child[1], env)
        elseif left.rule == @RULE_left_value(2)
            push_exprlist_expr!(lhs, left.child[1], env)
        else
            throw(TranspileError("internal error in convert_assign 1"))
        end
        if length(lhs) == 1
            if length(rhs) == 1
                push_assignment!(r, lhs[1], make_copy(rhs[1]), env)
            else
                push_assignment!(r, lhs[1], Expr(:tuple, make_tuple_array_copy(rhs)...), env)
            end
        else
            t = gensym()
            push!(r.args, Expr(:(=), t, Expr(:tuple, make_tuple_array_copy(rhs)...)))
            push!(r.args, Expr(:call, :sr_checktuplelength, t, length(lhs))) # TODO opt: runtime check can sometimes be avoided
            for i in 1:length(lhs)
                push_assignment!(r, lhs[i], Expr(:ref, t, i), env)
            end
        end
        return r
    else
        throw(TranspileError("internal error in convert_assign"))
    end
end


function convert_typecmd(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_typecmd(0) < 100
    t = Expr(:block)
    if a.rule == @RULE_typecmd(1)
        b = convert_expr(a.child[1], env)
        push!(t.args, Expr(:call, :sr_printouttype, b))
    elseif a.rule == @RULE_typecmd(2)
        for b in convert_exprlist(a.child[1], env)
            if b isa Expr && b.head == :block && length(b.args) > 0 && b.args[length(b.args)] == :nothing
                push!(t.args, b)
            else
                push!(t.args, Expr(:call, :sr_printout, b))
            end
        end
    else
        throw(TranspileError("internal error in convert_typecmd"))
    end
    return t
end


function convert_command(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_command(0) < 100
    if a.rule == @RULE_command(1)
        return convert_assign(a.child[1], env)
    elseif a.rule == @RULE_command(9)
        return convert_typecmd(a.child[1], env)
    else
        throw(TranspileError("internal error in convert_command"))
    end
end


function prepend_declared_var!(vars::Array{AstNode}, m::AstNode)
    (m.rule == @RULE_elemexpr(2) && m.child[1].rule == @RULE_extendedid(1)) || throw(TranspileError("declaration expects identifer name"))
    pushfirst!(vars, m)
end

# return is always a block
function convert_declare_ip_variable!(vars::Array{AstNode}, a::AstNode, env::AstEnv)
    while true
        @assert 0 < a.rule - @RULE_declare_ip_variable(0) < 100
        if a.rule == @RULE_declare_ip_variable(1) || a.rule == @RULE_declare_ip_variable(2)
            tcode = a.child[1]::Int
            prepend_declared_var!(vars, a.child[2])
            r = Expr(:block)
            if tcode == Int(DEF_CMD)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_def, makeunknown(m.child[1].child[1]::String)))
                end
            elseif tcode == Int(INT_CMD)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_int, makeunknown(m.child[1].child[1]::String)))
                end
            elseif tcode == Int(BIGINT_CMD)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_bigint, makeunknown(m.child[1].child[1]::String)))
                end
            elseif tcode == Int(STRING_CMD)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_string, makeunknown(m.child[1].child[1]::String)))
                end
            elseif tcode == Int(INTVEC_CMD)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_intvec, makeunknown(m.child[1].child[1]::String)))
                end
            elseif tcode == Int(LIST_CMD)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_list, makeunknown(m.child[1].child[1]::String)))
                end
            else
                throw(TranspileError("internal error in convert_declare_ip_variable 1"))
            end   
            return r
        elseif a.rule == @RULE_declare_ip_variable(99)
            typ = a.child[1]::String
            prepend_declared_var!(vars, a.child[2])
            r = Expr(:block)
            for m in vars
                push!(r.args, Expr(:call, Symbol("sr_declare_" * typ), makeunknown(m.child[1].child[1]::String)))
            end 
            return r
        elseif a.rule == @RULE_declare_ip_variable(5) || a.rule == @RULE_declare_ip_variable(6)
            if a.rule == @RULE_declare_ip_variable(5)
                numrows = convert_expr(a.child[3], env)
                numcols = convert_expr(a.child[4], env)
            else
                numrows = numcols = 1 # default matrix size is 1x1
            end
            prepend_declared_var!(vars, a.child[2])
            t::AstNode = a.child[1]
            r = Expr(:block)
            if t.rule == @RULE_mat_cmd(2)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_intmat, makeunknown(m.child[1].child[1]::String), numrows, numcols))
                    numrows = numcols = 1 # the rest of the matrices are 1x1
                end
            elseif t.rule == @RULE_mat_cmd(3)
                for m in vars
                    push!(r.args, Expr(:call, :sr_declare_bigintmat, makeunknown(m.child[1].child[1]::String), numrows, numcols))
                    numrows = numcols = 1 # the rest of the matrices are 1x1
                end
            else
                throw(TranspileError("internal error in convert_declare_ip_variable 5"))
            end
            return r
        elseif a.rule == @RULE_declare_ip_variable(7)
            prepend_declared_var!(vars, a.child[2])
            a = a.child[1]
        elseif a.rule == @RULE_declare_ip_variable(8)
            prepend_declared_var!(vars, a.child[1])
            r = Expr(:block)
            for m in vars
                push!(r.args, Expr(:call, :sr_declare_proc, makeunknown(m.child[1].child[1]::String)))
            end
            return r
        else
            throw(TranspileError("internal error in convert_declare_ip_variable "*string(a.rule)))
        end
    end
end


function join_blocks!(a::Expr, b::Expr)
    for c in b.args
        if c isa Expr && c.head == :block
            join_blocks!(a, c)
        elseif c != :nothing
            push!(a.args, c)
        end
    end
end


function block_append!(t::Expr, b)
    if b isa Expr && b.head == :block
        join_blocks!(t, b)
    elseif b != :nothing
        push!(t.args, b)
    end
end


function convert_ifcmd(a::AstNode, env::AstEnv) #perfect
    @assert 0 < a.rule - @RULE_ifcmd(0) < 100
    if a.rule == @RULE_ifcmd(1)
        test = convert_expr(a.child[1], env)
        body = convert_lines(a.child[2], env)
        return Expr(:if, Expr(:call, :sr_asbool, test), body)
    elseif a.rule == @RULE_ifcmd(2)
        # if the "else" were correctly paired with an "if", if should have been handled by find_if_else
        throw(TranspileError("else without if"))
    elseif a.rule == @RULE_ifcmd(3)
        test = convert_expr(a.child[1], env)
        return Expr(:if, Expr(:call, :sr_asbool, test), Expr(:break))        
    elseif a.rule == @RULE_ifcmd(4)
        return Expr(:break)
    elseif a.rule == @RULE_ifcmd(5)
        return Expr(:continue)
    else
        throw(TranspileError("internal error in convert_ifcmd"))
    end
end

function convert_whilecmd(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_whilecmd(0) < 100
    if a.rule == @RULE_whilecmd(1)
        test = convert_expr(a.child[1], env)
        return Expr(:while, Expr(:call, :sr_asbool, test), convert_lines(a.child[2], env))
    else
        throw(TranspileError("internal error in convert_whilecmd"))
    end
end

function convert_forcmd(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_forcmd(0) < 100
    if a.rule == @RULE_forcmd(1)
        r = Expr(:block)
        body = Expr(:block)
        init = convert_npprompt(a.child[1], env)
        test = convert_expr(a.child[2], env)
        block_append!(r, init)
        block_append!(body, convert_lines(a.child[4], env))
        block_append!(body, convert_npprompt(a.child[3], env))
        push!(r.args, Expr(:while, Expr(:call, :sr_asbool, test), body))
        return r
    else
        throw(TranspileError("internal error in convert_whilecmd"))
    end
end


#return false, 0 or true, ifexpr
function find_if_else(a::AstNode, i::Int, env::AstEnv)

    if i >= length(a.child)
        return false, 0
    end

    b = a.child[i]
    if b.rule != @RULE_pprompt(1) && b.rule != @RULE_top_pprompt(1)
        return false, 0
    end
    b = b.child[1]
    if b.rule != @RULE_flowctrl(1)
        return false, 0
    end
    b = b.child[1]
    if b.rule != @RULE_ifcmd(1)
        return false, 0
    end

    c = a.child[i + 1]
    if c.rule != @RULE_pprompt(1) && c.rule != @RULE_top_pprompt(1)
        return false, 0
    end
    c = c.child[1]
    if c.rule != @RULE_flowctrl(1)
        return false, 0
    end
    c = c.child[1]
    if c.rule != @RULE_ifcmd(2)
        return false, 0
    end

    return true, Expr(:if, Expr(:call, :sr_asbool, convert_expr(b.child[1], env)),
                           convert_lines(b.child[2], env),
                           convert_lines(c.child[1], env))
end

#push to arg list, and push to arginit
function convert_procarglist!(arglist::Vector{Symbol}, body::Expr, a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_procarglist(0) < 100
    if a.rule == @RULE_procarglist(1)
        for i in a.child
            convert_procarg!(arglist, body, i, env)
        end
    else
        throw(TranspileError("internal error in convert_procarglist"))
    end
end

function convert_procarg!(arglist::Vector{Symbol}, body::Expr, a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_procarg(0) < 100
    if a.rule == @RULE_procarg(1)
        b = a.child[2]
        if b.rule == @RULE_extendedid(1)
            s = b.child[1]::String
            !haskey(env.locals, s) || throw(TranspileError("duplicate argument name"))
            if a.child[1] == Int(INT_CMD)
                push!(body.args, Expr(:call, :srparameter_int, makeunknown(s), Symbol("#"*s)))
            elseif a.child[1] == Int(BIGINT_CMD)
                push!(body.args, Expr(:call, :srparameter_bigint, makeunknown(s), Symbol("#"*s)))
            else
                throw(TranspileError("unknown argument type"))
            end
        else
            throw(TranspileError("internal error in convert_procarg 1"))
        end
    elseif a.rule == @RULE_procarg(2)
        b = a.child[2]
        if b.rule == @RULE_extendedid(1)
            s = b.child[1]::String
            !haskey(env.locals, s) || throw(TranspileError("duplicate argument name"))
            if a.child[1] == Int(LIST_CMD)
                push!(body.args, Expr(:call, :srparameter_list, makeunknown(s), Symbol("#"*s)))
            else
                throw(TranspileError("unknown argument type"))
            end
        else
            throw(TranspileError("internal error in convert_procarg 2"))
        end
    elseif a.rule == @RULE_procarg(3)
        b = a.child[1]
        if b.rule == @RULE_extendedid(1)
            s = b.child[1]::String
            !haskey(env.locals, s) || throw(TranspileError("duplicate argument name"))
            push!(body.args, Expr(:call, :srparameter_proc, makeunknown(s), Symbol("#"*s)))
        else
            throw(TranspileError("internal error in convert_procarg 3"))
        end
    else
        throw(TranspileError("internal error in convert_procarg"))
    end
    push!(arglist, Symbol("#"*s))
end

function convert_proccmd(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_proccmd(0) < 100
    if a.rule == @RULE_proccmd(3) || a.rule == @RULE_proccmd(2)
        s = a.child[1]::String
        internalfunc = procname_to_func(s)
        args = Symbol[]
        body = Expr(:block, Expr(:call, :sr_enterfunction))
        newenv = AstEnv(true, Dict{String, Any}())
        if a.rule == @RULE_proccmd(3)
            convert_procarglist!(args, body, a.child[2], newenv)
            join_blocks!(body, convert_lines(a.child[3], newenv))
        else
            # empty args
            join_blocks!(body, convert_lines(a.child[2], newenv))
        end
        #procedures return nothing by default
        push!(body.args, Expr(:call, :sr_leavefunction))
        push!(body.args, Expr(:return, :nothing))
        r = Expr(:block)
        push!(r.args, Expr(:call, :sr_declare_proc, SName(Symbol(s))))
        push!(r.args, Expr(:function, Expr(:call, internalfunc, args...), body))
        push!(r.args, Expr(:call, :srassign, SName(Symbol(s)), Expr(:call, :SProc, internalfunc, s)))
        return r
    else
        throw(TranspileError("internal error in convert_proccmd"))
    end
end


function convert_flowctrl(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_flowctrl(0) < 100
    if a.rule == @RULE_flowctrl(1)
        return convert_ifcmd(a.child[1], env)
    elseif a.rule == @RULE_flowctrl(2)
        return convert_whilecmd(a.child[1], env)
    elseif a.rule == @RULE_flowctrl(4)
        return convert_forcmd(a.child[1], env)
    elseif a.rule == @RULE_flowctrl(5)
        return convert_proccmd(a.child[1], env)
    else
        throw(TranspileError("internal error in convert_flowctrl"))
    end
end


function convert_pprompt(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_pprompt(0) < 100
    if a.rule == @RULE_pprompt(1)
        return convert_flowctrl(a.child[1], env)
    elseif a.rule == @RULE_pprompt(2)
        return convert_command(a.child[1], env)
    elseif a.rule == @RULE_pprompt(3)
        vars = AstNode[] # unused
        return convert_declare_ip_variable!(vars, a.child[1], env)
    elseif a.rule == @RULE_pprompt(4)
        return convert_returncmd(a.child[1], env)
    elseif a.rule == @RULE_pprompt(6)
        return :nothing
    else
        throw(TranspileError("internal error in convert_pprompt"))
    end
end


function convert_npprompt(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_npprompt(0) < 100
    if a.rule == @RULE_npprompt(1)
        return convert_flowctrl(a.child[1], env)
    elseif a.rule == @RULE_npprompt(2)
        return convert_command(a.child[1], env)
    elseif a.rule == @RULE_npprompt(3)
        vars = AstNode[] # unused
        return convert_declare_ip_variable!(vars, a.child[1], env)
    elseif a.rule == @RULE_npprompt(4)
        return convert_returncmd(a.child[1], env)
    else
        throw(TranspileError("internal error in convert_pprompt"))
    end
end


function convert_top_pprompt(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_top_pprompt(0) < 100
    if a.rule == @RULE_top_pprompt(1)
        return convert_flowctrl(a.child[1], env)
    elseif a.rule == @RULE_top_pprompt(2)
        return convert_command(a.child[1], env)
    elseif a.rule == @RULE_top_pprompt(3)
        vars = AstNode[] # unused
        return convert_declare_ip_variable!(vars, a.child[1], env)
    elseif a.rule == @RULE_top_pprompt(5)
        return :nothing
    elseif a.rule == @RULE_top_pprompt(5)
        return :nothing
    else
        throw(TranspileError("internal error in convert_top_pprompt"))
    end
end

# return is always a block
function convert_lines(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_lines(0) < 100
    t = Expr(:block)
    i = 1
    while i <= length(a.child)
        have_if_else, b = find_if_else(a, i, env)
        if have_if_else
            i += 1
        else
            b = convert_pprompt(a.child[i], env)
        end
        block_append!(t, b)
        i += 1
    end
    return t
end


# return is always a toplevel
function convert_toplines(a::AstNode, env::AstEnv)
    r = Expr(:toplevel)
    i = 1
    while i <= length(a.child)
        have_if_else, b = find_if_else(a, i, env)
        if have_if_else
            i += 1
        else
            b = convert_top_pprompt(a.child[i], env)
        end
        block_append!(r, b)
        i += 1
    end
    return r
end


function srun(s::String)

    ast = ccall((:singular_parse, "libsingularparse"), Any,
                    (Cstring, Ptr{Ptr{UInt8}}, UInt),
                    s, sGlobal_NewStructNames, length(sGlobal_NewStructNames))

    if ast isa String
        println("syntax error: $ast")
    else
        println("new strings: ", ast.child[2].child)
        append!(sGlobal_NewStructNames, ast.child[2].child)
        println("sGlobal_NewStructNames: ", sGlobal_NewStructNames)

        println("singular ast:")
        astprint(ast.child[1], 0)

        t0 = time()
        expr = convert_toplines(ast.child[1], sGlobal_Env)
        t1 = time()
        println("conversion time: ", t1 - t0, " seconds")
        println("--------transpiled code--------")
        for i in expr.args; println(i); end;
        println("-------------------------------")
        eval(expr)
    end
end
