This is the begining of a Singular to Julia translator.
The makeit program makes the library that julia will call so get the syntax tree
for an input string in the singular language. Here is an example:

```
julia> include("test.jl")
letsparse (generic function with 1 method)

julia> dump(letsparse("1+2"))
String "syntax error"

julia> dump(letsparse("1+2;"), maxdepth=100)
Array{Any}((2,))
  1: String "[[top_lines -> top_pprompt...]]"
  2: Array{Any}((2,))
    1: String "[[top_pprompt -> command ';']]"
    2: Array{Any}((2,))
      1: String "[[command -> typecmd]]"
      2: Array{Any}((2,))
        1: String "[[typecmd -> exprlist]]"
        2: Array{Any}((2,))
          1: String "[[exprlist -> expr..]]"
          2: Array{Any}((2,))
            1: String "[[expr -> expr_arithmetic]]"
            2: Array{Any}((3,))
              1: String "[[expr_arithmetic -> expr '+' expr]]"
              2: Array{Any}((2,))
                1: String "[[expr -> elemexpr]]"
                2: Array{Any}((2,))
                  1: String "[[elemexpr -> INT_CONST]]"
                  2: String "1"
              3: Array{Any}((2,))
                1: String "[[expr -> elemexpr]]"
                2: Array{Any}((2,))
                  1: String "[[elemexpr -> INT_CONST]]"
                  2: String "2"
```

Some problems:

(1) With the grammar/scanner rules as implmented in Singular, the input
```
proc f(int i)
{
    if (100 > i)
    {
        i;
    }
    else
    {
        adf+&block /@#$% of &$*( garbage
    }
};
``` 
will result in `f(0)`,...,`f(99)` running perfectly fine. One only discovers the syntax error when _running_ `f(100)`.

(2) Every semicolon is a potential print command. Even though the definitions of `g` are the same in each case, only the semicolon in the second example causes a print.
```
proc g() {f();};
proc f() {3; return();};
g();
```
and
```
proc g() {f();};
proc f() {3; return(4);};
g();
```

(3) The `parameter` keyword is impossible to handle. It should probably be banned along with `exec`.
```
proc f()
{
    parameter int i;
    if (i > 5)
    {
        parameter int j;
    };
    (i, j);
    return(0);
};
```
```
> int j = 5; f(2, 3);
2 5
// ** too many arguments for f
0
> f(6, 3);
6 3
0
```

(4) Singular's assignment operator is unpredictable: `f(1, 2)` prints `(2, 2)` while `g(1, 2)` prints `(2, 1)`.
```
proc f(A, B)
{
    int a = A;
    int b = B;
    a, b = b, a;
    (a, b);
}

proc g(A, B)
{
    int a = A;
    int b = B;
    a, b = b + 0, a + 0;
    (a, b);
}
```

(5) Singular allows local variables to be declared with different types.
```
proc f()
{
    ideal i = (x^2, y^2);
    i;
    ring r = 0, (a, b, c), dp;
    poly i = a + b;
    i;
    ring s = 0, (s, t), dp;
    int i = 7;
    i;
};

ring r = 0, (x, y, z), dp;
f();
```

(6) Singular automatically splats tuples. This is a call to `f` with four arguments.
```
proc g(int i)
{
    if (i == 0)
    {
        return(i);
    }
    else
    {
        return(i, i);
    }
}

f(1, g(2), 3)
```

(7) Singular plays fast and loose with unknown identifiers.

(7.1) Running `f();` is an error and running `g();` is not.
```
proc f() {return(x););
proc g() {return(1, x););
```

(7.2) The behaviour of `x(1)` at runtime seems to be:
1. The `x` starts out life as an unknown identifier with name "x"
    * This can be though of as a special UNKNOWN type that is used by the interpreter but is not available to the user.
2. The name "x" is looked up in the order:
    * a local variable (w.r.t. a procedure),
    * a local ring variable (w.r.t. the current basering locally set in a procedure),
    * a global variable,
    * a global ring variable (w.r.t. the current basering)
    * a monomial consisting of local ring variables written without operators,
    * a monomial consisting of global ring variables written without operators.
3. If the name "x" is found in this lookup then the `x` portion of the input `x(1)` evaluates to one of these standard types.
    * Otherwise, _the evaluator leaves it as this UNKOWN type_.
4. The '(' operator then has the following behaviour when applied to evaluated expression `E1` and `E2`:
    * If E1 is of `proc` type, then `E1(E2)` evaluates to a function call.
    * If E1 is of `map` type, then `E1(E2)` calls special evaluation code for maps.
    * If E1 is of `UNKOWN` type, then `E1(E2)` evaluates to another UNKNOWN type with a longer name.

(7.3) The ring constructor dynamically introduces new identifiers into the current lexical scope.
      I have no idea how this could be done in julia without a complete rewrite of the interpreter that takes advantage of _none_ of the dynamic features of julia.



(8) Besides the second-class types instantiated in unknown identifiers and tuples, there is a "nothing" that can be passed around.
```
> proc f() {return();};
> list k; k[10]=0;
> list l = 1,2,3; l;
[1]:
   1
[2]:
   2
[3]:
   3
> l[3]=f();
// ** right side is not a datum, assignment ignored
// ** in line >>return();<<
> l;
[1]:
   1
[2]:
   2
> l[2]=k[1];
> l;
[1]:
   1
```

(9) Lists can be either ring-dependent or ring-independent and thus disappear and reappear in the list of local variables w.r.t. a procedure.

```
> proc f(int b, def R, def S)
> {
>     list l = 1, 2, 3; // l is ring-independent (1)
>     if (b)
>     {
>         setring R;
>         l[1] = x*y; // l is ring-dependent (2)
>     }
>     setring S;
>     l; // (1) l is 1,2,3, or (2) l is something called "l" in S or an error
> };

> ring r = 0, (x, y, z), lp;
> ring s = 0, (u, v, w), lp;
> list l = u, v, w;

> f(0, r, s);
[1]:
   1
[2]:
   2
[3]:
   3

> f(1, r, s);
[1]:
   u
[2]:
   v
[3]:
   w
```

(10) The ring-dependence/independence of a list is of course applied recursively, so the getindex function needs some very special treatment.
```
> ring r;
> list l = list(list(1,2,3), list(4,5,6), list(7,8,9));
> listvar(r);
// r                              [0]  *ring
> l[2][2]=x;

    ssetindex(sgetindex(l,2), 2, x)


> listvar(r);
// r                              [0]  *ring
// l                              [0]  list, size: 3
> l[2][2]=55;
> listvar(r);
// r                              [0]  *ring
```


(11) Variables declared poly need not be poly's. Therefore, _we have no type information on ring dependent types inside of a procedure_.
```
> proc f(def R, def S)
> {
>     setring R;
>     poly p = x*y;
>     setring S;
>     typeof(p);    // it will be an ideal
> };
> ring r = 0,(x,y,z),lp;
> ring s = 0,(u,v,w),lp;
> ideal p = (u,v,w);
> f(r, s);
ideal
```


(12) A proc that looks like it calls itself may in fact not call itself.
```
> proc f(int n) {if (n <= 1) {return(n);} else {return(f(n - 1) + f(n - 2));}};
> proc g(int n) {return(n*n);};
> proc h = f; f = g; g = h; // swap f and g
> g(5); // this is 4*4 + 3*3, not the fifth Fibonacci number
```

(13) Singular allows polys to have the same names as ring variable names.
```
> ring r = 0, (x, y, z), lp;
> x + y + z;
x+y+z
> x = y + z;
   ? error in assign: left side is not an l-value
   ? error occurred in or before STDIN line 3: `x = y + z;`
> poly x = y + z;
> x + y + z;       
2y+2z
> var(1) + var(2) + var(3);
x+y+z
```


