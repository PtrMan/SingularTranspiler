
struct Unknown
    name::String
end

# Int same

# BigInt same

# String same

struct IntVec
    vector::Vector{Int}
end

struct IntMat
    matrix::Array{Int, 2}
end

struct BigIntMat
    matrix::Array{BigInt, 2}
end

mutable struct ListData # special type to wrap Vector{Any} to avoid exploding type inference
    data::Vector{Any}
end

struct List
    list::ListData
end

const SingType = Union{Int, BigInt, IntVec, IntMat, BigIntMat, List}

const _IntVec    = Union{IntVec, Vector{Int}}
const _IntMat    = Union{IntMat, Array{Int, 2}}
const _BigIntMat = Union{BigIntMat, Array{BigInt, 2}}
const _List      = Union{List, ListData}

const _SingType = Union{Int, BigInt, IntVec, IntMat, BigIntMat, List, Vector{Int}, Array{Int, 2}, Array{BigInt, 2}, ListData}


function Base.deepcopy_internal(a::IntVec, dict::IdDict)
  return IntVec(deepcopy(a.vector))
end

function Base.deepcopy_internal(a::IntMat, dict::IdDict)
  return IntMat(deepcopy(a.matrix))
end

function Base.deepcopy_internal(a::BigIntMat, dict::IdDict)
  return BigIntMat(deepcopy(a.matrix))
end

function Base.deepcopy_internal(a::ListData, dict::IdDict)
  return ListData(deepcopy(a.data))
end

function Base.deepcopy_internal(a::List, dict::IdDict)
  return List(deepcopy(a.list))
end


#copiers returning SingType, usually so that we can assign it somewhere

scopy(a::Int) = a

scopy(a::BigInt) = a

scopy(a::Vector{Int}) = IntVector(deepcopy(a))
scopy(a::IntVec) = a

scopy(a::Array{Int, 2}) = IntMat(deepcopy(a))
scopy(a::IntMat) = a

scopy(a::Array{BigInt, 2}) = BigIntMat(deepcopy(a))
scopy(a::BigIntMat) = a

scopy(a::ListData) = List(deepcopy(a))
scopy(a::List) = a

scopy(a::Tuple{Vararg{SingType}}) = a

#copiers returning non SingType, usually so that we can mutate it

sedit(a::Vector{Int}) = deepcopy(a)
sedit(a::IntVec) = a.vector

sedit(a::Array{Int, 2}) = deepcopy(a)
sedit(a::IntMat) = a.matrix

sedit(a::Array{BigInt, 2}) = deepcopy(a)
sedit(a::BigIntMat) = a.matrix

sedit(a::ListData) = deepcopy(a)
sedit(a::List) = a.list

# reference to the underlying non SingType

sref(a::Int) = a

sref(a::BigInt) = a

sref(a::String) = a

sref(a::Vector{Int}) = a
sref(a::IntVec) = a.vector

sref(a::Array{Int, 2}) = a
sref(a::IntMat) = a.matrix

sref(a::Array{BigInt, 2}) = a
sref(a::BigIntMat) = a.matrix

sref(a::ListData) = a
sref(a::List) = a.list


########### type conversions ##################################################
# each conversion returns an object of the corresponding type

function sconvert2int(a::Int)
    return a
end

function sconvert2int(a::BigInt)
    if typemin(Int) <= a <= typemax(Int)
        return Int(a)
    else
        error("cannot convert to int")
        return Int(0)
    end
end

function sconvert2int(a)
    error("cannot convert to int")
    return Int(0)
end


function sconvert2bigint(a::Int)
    return BigInt(a)
end

function sconvert2bigint(a::BigInt)
    return a
end

function sconvert2bigint(a)
    error("cannot convert to bigint")
    return BigInt(0)
end


function sconvert2intmat(a::IntMat)
    return a
end

function sconvert2intmat(a::Array{Int, 2})
    return IntMat(deepcopy(a))
end

function sconvert2intmat(a::Tuple{Vararg{SingType}}, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(Int, nrows, ncols)
    row_idx = col_idx = 1
    for i in a
        mat[row_idx, col_idx] = sconvert2int(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return IntMat(mat)
end

function sconvert2intmat(a::_List, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(Int, nrows, ncols)
    row_idx = col_idx = 1
    for i in sref(a).list.data
        mat[row_idx, col_idx] = sconvert2int(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return IntMat(mat)
end


function sconvert2bigintmat(a::BigIntMat)
    return a
end

function sconvert2bigintmat(a::Array{BigInt, 2})
    return BigIntMat(deepcopy(a))
end

function sconvert2bigintmat(a::Tuple{Vararg{SingType}}, nrows::Int, ncols::Int)
    if nrows <= 0 || ncols <= 0
        error("nrows and ncols must be positive")
    end
    mat = zeros(BigInt, nrows, ncols)
    row_idx = col_idx = 1
    for i in a
        mat[row_idx, col_idx] = sconvert2bigint(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return BigIntMat(mat)
end

function sconvert2bigintmat(a::_List, nrows::Int, ncols::Int)
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
    return BigIntMat(mat)
end


function sconvert2list(a::List)
    return a
end

function sconvert2list(a::ListData)
    return List(deepcopy(a))
end

function sconvert2list(a::Tuple{Vararg{SingType}})
    return List(ListData(collect(a)))
end

function sconvert2list(a)
    
end

########### mutatingish operations #############################################

# in general the operation of the assignment a = b in Singular depends on the values of a and b
# Therefore, a = b is sometimes transpiled into a = sset(a, b)
#   currently only for intmat and bigintmat a

function sset(a::IntMat, b::_IntMat)
    return scopy(b)
end

function sset(a::IntMat, b::Tuple{Vararg{SingType}})
    A = sedit(a)
    nrows, ncols = size(A)
    row_idx = col_idx = 1
    for i in b
        A[row_idx, col_idx] = sconvert2int(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return IntMat(A)
end

function sset(a::IntMat, b)
    error("cannot assign to intmat")
end


function sset(a::BigIntMat, b::_BigIntMat)
    return scopy(b)
end

function sset(a::BigIntMat, b::Tuple{Vararg{SingType}})
    A = sedit(a)
    nrows, ncols = size(A)
    row_idx = col_idx = 1
    for i in b
        A[row_idx, col_idx] = sconvert2bigint(i)
        col_idx += 1
        if col_idx > ncols
            col_idx = 1
            row_idx += 1
            if row_idx > nrows
                break
            end
        end
    end
    return BigIntMat(A)
end

function sset(a::BigIntMat, b)
    error("cannot assign to bigintmat")
end


function sgetindex(a::_IntVec, i::Int)
    return sref(a)[i]
end


function ssetindex(a::_IntVec, i::Int, b)
    sref(a)[i] = scopy(b)
    return nothing
end


function sgetindex(a::_BigIntMat, i::Int, j::Int)
    return sref(a)[i, j]
end


function ssetindex(a::_BigIntMat, i::Int, j::Int, b)
    sref(a)[i, j] = scopy(b)
    return nothing
end


function sgetindex(a::_List, i::Int)
    return sref(sref(a).data[i])
end

function ssetindex(a::_List, i::Int, b)
    bcopy = scopy(b) # copy before the possible resize
    r = sref(a).data
    if i > length(r)
        resize!(r, i)
    end
    r[i] = bcopy
    return nothing
end


function sinsert(a::_List, b, i::Int)
    bcopy = scopy(b)
    r = sedit(a);
    if i > length(r.data)
        resize!(r.data, i + 1)
        r.data[i + 1] = bcopy
    else
        insert!(r.data, i + 1, bcopy)
    end
    return List(r)
end


function sdelete(a::_List, i::Int)
    r = sedit(a);
    deleteat!(r.data, i)
    return List(r)
end

################ tuples ########################################################

function smaketuple(v...)
    g = (x isa Tuple ? x : (x,) for x in v)
    r = tuple(Iterators.flatten(g)...)
    return r
end

########### arithmetic operations ##############################################

splus(a::Int, b::Int) = Base.checked_add(a, b)
splus(a::Int, b::BigInt) = a + b
splus(a::BigInt, b::Int) = a + b
splus(a::BigInt, b::BigInt) = a + b

sminus(a::Int, b::Int) = Base.checked_sub(a, b)
sminus(a::Int, b::BigInt) = a + b
sminus(a::BigInt, b::Int) = a + b
sminus(a::BigInt, b::BigInt) = a + b

stimes(a::Int, b::Int) = Base.checked_mul(a, b)
stimes(a::Int, b::BigInt) = a * b
stimes(a::BigInt, b::Int) = a * b
stimes(a::BigInt, b::BigInt) = a * b


function splus(a::_List, b::_List)
    return List(ListData(vcat(sedit(a).data, sedit(b).data)))
end


function splus(a::Tuple{Vararg{SingType}}, b::_SingType)
    return Tuple(i == 1 ? splus(a[i], b) : a[i] for i in 1:length(a));
end


function splus(a::_SingType, b::Tuple{Vararg{SingType}})
    return Tuple(i == 1 ? splus(a, b[i]) : b[i] for i in 1:length(b));
end


function splus(a::Tuple{Vararg{SingType}}, b::Tuple{Vararg{SingType}})
    return Tuple(splus(a[i], b[i]) for i in 1:min(length(a), length(b)));
end


function splus(a::_IntVec, b::_IntVec)
    A = sref(a);
    B = sref(b);
    return IntVec([(i <= length(A) ? A[i] : 0) + (i <= length(B) ? B[i] : 0) for i in 1:max(length(A), length(B))]);
end


function splus(a::_IntVec, b::Int)
    A = sref(a);
    return IntVec([A[i] + b for i in 1:length(A)]);
end


function splus(a::Int, b::_IntVec)
    B = sref(b);
    return IntVec([a + B[i] for i in 1:length(A)]);
end


function splus(a::_IntMat, b::Int)
    A = sedit(a)
    nrows, ncols = size(A)
    for i in 1:min(nrows, ncols)
        A[i, i] = A[i, i] + b
    end
    return IntMat(A)
end


function splus(a::Int, b::_IntMat)
    B = sedit(B)
    nrows, ncols = size(B)
    for i in 1:min(nrows, ncols)
        B[i, i] += a + B[i, i]
    end
    return IntMat(A)
end


function splus(a::_IntMat, b::_IntMat)
    return IntMat(sref(a) + sref(b))
end

function stimes(a::_BigIntMat, b::_BigIntMat)
    return BigIntMat(sref(a) * sref(b))
end

function stimes(a::Int, b::_BigIntMat)
    return BigIntMat(a*sref(b))
end

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
    type::Int
    locals::Dict{String, Any}
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
macro RULE_procargs(i)            ;return(4500 + i); end

function astprint(a::Int, indent::Int)
    print(" "^indent);
    println(a);
end

function astprint(a::String, indent::Int)
    print(" "^indent);
    println(a);
end

function astprint(a::AstNode, indent::Int)
    print(" "^indent);
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
        print("RULE_procargs ")
    else
        println("!!unknown rule")
    end
    println(a.rule);
    for i in 1:length(a.child)
        astprint(a.child[i], indent + 4)
    end
end


function convert_extendedid(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_extendedid(0) < 100
    if a.rule == @RULE_extendedid(1)
        s::String = a.child[1]
        if haskey(env.locals, s)
            return Expr(:call, :sref, Symbol(s))
        else
            return Unknown(s)
        end
    else
        throw(TranspileError("internal error in convert_extendedid"))
    end
end


function convert_elemexpr(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_elemexpr(0) < 100
    if a.rule == @RULE_elemexpr(2)
        return convert_extendedid(a.child[1], env)
    elseif a.rule == @RULE_elemexpr(8)
        x = parse(BigInt, a.child[1])
        if typemin(Int) <= x <= typemax(Int)
            return Int(x)
        else
            return x
        end
    elseif a.rule == @RULE_elemexpr(37)
        b::Array{Any} = convert_exprlist(a.child[1], env)
        if length(b) == 1
            return b[1]
        else
            return Expr(:call, :smaketuple, b...)
        end
    else
        throw(TranspileError("internal error in convert_elemexpr " * string(a.rule)))
    end  
end


function convert_expr_arithmetic(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_expr_arithmetic(0) < 100
    if a.rule == @RULE_expr_arithmetic(3)
        return Expr(:call, :splus, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(4)
        return Expr(:call, :sminus, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(5)
        return Expr(:call, :stimes, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(6)
        return Expr(:call, :smod, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    elseif a.rule == @RULE_expr_arithmetic(7)
        return Expr(:call, :sdivide, convert_expr(a.child[1], env), convert_expr(a.child[2], env))
    else
        throw(TranspileError("internal error in convert_expr_arithmetic "*string(a.rule)))
    end
end


function convert_expr(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_expr(0) < 100
    if a.rule == @RULE_expr(1)
        return convert_expr_arithmetic(a.child[1], env)
    elseif a.rule == @RULE_expr(2)
        return convert_elemexpr(a.child[1], env)
    else
        throw(TranspileError("internal error in convert_expr"))
    end
end

# return is a Any{Expr}
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
        if length(b) == 1
            return Expr(:return, b[1])
        else
            return Expr(:return, Expr(:tuple, b...)) # TODO bug: splatting
        end
    elseif a.rule == @RULE_returncmd(2)
        return Expr(:return)
    else
        throw(TranspileError("internal error in convert_returncmd"))
    end
end


coerce_for_assignment(a::Expr, ::Type{Unknown})     = Expr(:call, :sconvert2poly, a)
coerce_for_assignment(a::Expr, ::Type{Int})         = Expr(:call, :sconvert2int, a)
coerce_for_assignment(a::Symbol, ::Type{Int})       = Expr(:call, :sconvert2int, a)
coerce_for_assignment(a::Expr, ::Type{BigInt})      = Expr(:call, :sconvert2bigint, a)
coerce_for_assignment(a::Expr, ::Type{String})      = Expr(:call, :sconvert2string, a)
coerce_for_assignment(a::Expr, ::Type{IntVec})      = Expr(:call, :sconvert2intvec, a)
coerce_for_assignment(a::Expr, ::Type{IntMat})      = Expr(:call, :sconvert2intmat, a)
coerce_for_assignment(a::Expr, ::Type{BigIntMat})   = Expr(:call, :sconvert2bigintmat, a)
coerce_for_assignment(a::Expr, ::Type{List})        = Expr(:call, :sconvert2list, a)

function assignment_to_symbol(left::Symbol, right, typ, env::AstEnv)
    if typ == IntMat || typ == BigIntMat
        Expr(:(=), left, Expr(:call, :sset, left, right))
    else
        Expr(:(=), left, coerce_for_assignment(right, typ))
    end
end


function push_assignment!(out::Expr, left::AstNode, right, env::AstEnv)
    @assert 0 < left.rule - @RULE_expr(0) < 100
    if left.rule == @RULE_expr(2)
        a::AstNode = left.child[1]
        @assert 0 < a.rule - @RULE_elemexpr(0) < 100
        if a.rule == @RULE_elemexpr(2)
            b::AstNode = a.child[1]
            @assert 0 < b.rule - @RULE_extendedid(0) < 100
            if b.rule == @RULE_extendedid(1)
                var::String = b.child[1]
                if haskey(env.locals, var)
                    push!(out.args, assignment_to_symbol(Symbol(var), right, env.locals[var], env))
                else
                    throw(TranspileError("cannot assign to undeclared variable"))
                end
            else
                throw(TranspileError("cannot assign to lhs"))
            end
        else
            throw(TranspileError("cannot assign to lhs"))
        end
    elseif left.rule == @RULE_expr(3)
        push!(out.args, Expr(:call, :ssetindex, convert_expr(left.child[1], env),
                                                convert_expr(left.child[2], env), # no scopy needed, runtime error if not int
                                                convert_expr(left.child[3], env), # no scopy needed, runtime error if not int
                                                right))
    elseif left.rule == @RULE_expr(4)
        push!(out.args, Expr(:call, :ssetindex, convert_expr(left.child[1], env),
                                                convert_expr(left.child[2], env), # no scopy needed, runtime error if not int
                                                right))
    else
        throw(TranspileError("cannot assign to lhs"))
    end
end

# return is a block
function convert_assign(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_assign(0) < 100
    if a.rule == @RULE_assign(1)
        left::AstNode = a.child[1];
        if left.rule == @RULE_left_value(2)
            llist::AstNode = left.child[1]
            rlist::AstNode = a.child[2]
            r = Expr(:block)
            if length(llist.child) == 1
                t = convert_exprlist(rlist, env)
                if length(t) == 1
                    push_assignment!(r, llist.child[1], t[1], env)
                else
                    push_assignment!(r, llist.child[1], Expr(:call, :smaketuple, t...), env)
                end
            else
                t = gensym();
                tuplearray = map(x-> Expr(:call, :scopy, ), convert_exprlist(rlist, env))
                push!(r.args, Expr(:(=), t, Expr(:tuple, tuplearray))) # TODO: bug: splatting
                push!(r.args, Expr(:call, :schecktuplelength, t, length(llist.child))) # same TODO: opt: runtime check can sometimes be avoided
                for i in 1:length(llist.child)
                    push_assignment!(r, llist.child[i], Expr(:ref, t, i), env)
                end
            end
            return r
        else
            throw(TranspileError("internal error in convert_assign 2"))
        end
    else
        throw(TranspileError("internal error in convert_assign 1"))
    end
end


function convert_command(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_command(0) < 100
    if a.rule == @RULE_command(1)
        return convert_assign(a.child[1], env)
    else
        throw(TranspileError("internal error in convert_command"))
    end
end


function convert_declare_ip_variable(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_declare_ip_variable(0) < 100
    if a.rule == @RULE_declare_ip_variable(5)
        numrows = convert_expr(a.child[3], env)
        numcols = convert_expr(a.child[4], env)
        t::AstNode = a.child[1]
        m::AstNode = a.child[2]
        s::String = ""
        if m.rule == @RULE_elemexpr(2) && m.child[1].rule == @RULE_extendedid(1)
            s = m.child[1].child[1]
        else
            throw(TranspileError("internal error in convert_declare_ip_variable"))
        end
        !haskey(env.locals, s) || throw("redeclaration of variable")
        if t.rule == @RULE_mat_cmd(3)
            env.locals[s] = BigIntMat
            return Expr(:(=), Symbol(s), coerce_for_assignment(Expr(:call, :zeros, :BigInt, numrows, numcols), BigIntMat))
        elseif t.rule == @RULE_mat_cmd(2)
            env.locals[s] = IntMat
            return Expr(:(=), Symbol(s), Expr(:call, :zeros, :Int, numrows, numcols))
        else
            throw(TranspileError("internal error in convert_declare_ip_variable"))
        end
    else
        throw(TranspileError("internal error in convert_declare_ip_variable"))
    end    
end


function convert_pprompt(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_pprompt(0) < 100
    if a.rule == @RULE_pprompt(2)
        return convert_command(a.child[1], env)
    elseif a.rule == @RULE_pprompt(3)
        return convert_declare_ip_variable(a.child[1], env)
    elseif a.rule == @RULE_pprompt(4)
        return convert_returncmd(a.child[1], env)
    elseif a.rule == @RULE_pprompt(6)
        return :nothing
    else
        throw(TranspileError("internal error in convert_pprompt " * string(a.rule)))
    end
end


function join_blocks!(a::Expr, b::Expr)
    for i in 1:length(b.args)
        push!(a.args, b.args[i])
    end
end

# return is always a block
function convert_lines(a::AstNode, env::AstEnv)
    t = Expr(:block)
    for i = 1:length(a.child)
        b = convert_pprompt(a.child[i], env)
        if b isa Expr && b.head == :block
            join_blocks!(t, b)
        elseif b != :nothing
            push!(t.args, b)
        end
    end
    return t
end

#push to arg list, and push to arginit
function convert_procargs!(arglist::Vector{Symbol}, body::Expr, a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_procargs(0) < 100
    if a.rule == @RULE_procargs(1) || a.rule == @RULE_procargs(3)
        b = a.child[2]
        if b.rule == @RULE_extendedid(1)
            s::String = b.child[1]
            !haskey(env.locals, s) || throw(TranspileError("duplicate argument name"))
            if a.child[1] == 419
                env.locals[s] = Int
            else
                throw(TranspileError("unknown argument type"))
            end
            push!(arglist, Symbol(s))
            push!(body.args, Expr(:(=), Symbol(s), coerce_for_assignment(Symbol(s), env.locals[s])))
        else
            throw(TranspileError("internal error in convert_procargs"))
        end
        if a.rule == @RULE_procargs(3)
            convert_procargs!(arglist, body, a.child[3], env)
        end
    elseif a.rule == @RULE_procargs(2)
        throw(TranspileError("undeclared argument types not allowed"))
    elseif a.rule == @RULE_procargs(4)
        throw(TranspileError("undeclared argument types not allowed"))
    else
        throw(TranspileError("internal error in convert_procargs"))
    end
end


function convert_proccmd(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_proccmd(0) < 100
    if a.rule == @RULE_proccmd(3)
        name = Symbol(a.child[1][6:end]) # TODO flimsy
        args = Symbol[]
        body = Expr(:block)
        convert_procargs!(args, body, a.child[2], env)
        join_blocks!(body, convert_lines(a.child[3], env))
        return Expr(:function, Expr(:call, name, args...), body)
    else
        throw(TranspileError("internal error in convert_proccmd"))
    end
end


function convert_flowctrl(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_flowctrl(0) < 100
    if a.rule == @RULE_flowctrl(5)
        return convert_proccmd(a.child[1], env)
    else
        throw(TranspileError("internal error in convert_flowctrl"))
    end    
end


function convert_top_pprompt(a::AstNode, env::AstEnv)
    @assert 0 < a.rule - @RULE_top_pprompt(0) < 100
    if a.rule == @RULE_top_pprompt(1)
        return convert_flowctrl(a.child[1], env)
    elseif a.rule == @RULE_top_pprompt(5)
        return :nothing
    else
        throw(TranspileError("internal error in convert_top_pprompt"))
    end
end


function convert_top(a::AstNode, env::AstEnv)
    t = Any[]
    for i = 1:length(a.child)
        b = convert_top_pprompt(a.child[i], env)
        if b != :nothing
            push!(t, b)
        end
    end
    return Expr(:toplevel, t...)
end


#= 
proc F() {return(7, 8, 9);};
list l = bigint(1), bigint(2), bigint(3);
bigintmat m[2][2] = l;
l[2] = bigint(9999);
l[2] = l;
l[2][2] = l;
a,b,c,d,g = (1,F(),3) + 1;
=#

#=
function F()
   return tuple(scopy(7)..., scopy(8)..., scopy(9)...)
end

function f(n::Int)

    l = sconvert2list(tuple(scopy(BigInt(1)), scopy(BigInt(2)), scopy(BigInt(3))))
println("l: $l")
dump(l)

    m = sconvert2bigintmat(l, 2, 2);
println("m:")
dump(m)


    ssetindex(l, 2, BigInt(9999))
println("l: $l")
dump(l)

println("m:")
dump(m)



    ssetindex(l, 2, sref(l))
println("l: $l")
dump(l)
    ssetindex(sgetindex(l, 2), 2, sref(l))
println("l: $l")
dump(l)



    a,b,c,d,g = splus(tuple(scopy(1)..., scopy(F())..., scopy(3)...), 1)

println("a = $a")
println("b = $b")
println("c = $c")
println("d = $d")
println("g = $g")

end
=#

function singrun(fs::String)

    s = read(fs, String);
    ast = ccall((:singular_parse, "libsingularparse"), Any, (Cstring, ), s)
    env = AstEnv(0, Dict{String, Any}())

    println("singular ast:")
    astprint(ast, 0)

    t0 = time()
#    try
        expr = convert_top(ast, env)
        t1 = time()
        println("elapsed time: ", t1-t0, " seconds")
        println("expr:"); dump(expr, maxdepth=100)
        println("expr:")
        println(expr)
        eval(expr)
#    catch ex
#        println(ex)
#    end
end


