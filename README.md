
# C PROGRAMMING

### INTRODUCTION
C (/ s iː /, as in the letter c) is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, with a static type system.By design, C provides constructs that map efficiently to typical machine instructions.It has found lasting use in applications previously coded in assembly language.Such applications include operating systems and various application software for computer architectures that range from supercomputers ...

---

#### DEEP DIVE
C has a formal grammar specified by the C standard.[21] Line endings are generally not significant in C; however, line boundaries do have significance during the preprocessing phase. Comments may appear either between the delimiters /* and */, or (since C99) following // until the end of the line. Comments delimited by /* and */ do not nest, and these sequences of characters are not interpreted as comment delimiters if they appear inside string or character literals.[22]

C source files contain declarations and function definitions. Function definitions, in turn, contain declarations and statements. Declarations either define new types using keywords such as struct, union, and enum, or assign types to and perhaps reserve storage for new variables, usually by writing the type followed by the variable name. Keywords such as char and int specify built-in types. Sections of code are enclosed in braces ({ and }, sometimes called "curly brackets") to limit the scope of declarations and to act as a single statement for control structures.

As an imperative language, C uses statements to specify actions. The most common statement is an expression statement, consisting of an expression to be evaluated, followed by a semicolon; as a side effect of the evaluation, functions may be called and variables may be assigned new values. To modify the normal sequential execution of statements, C provides several control-flow statements identified by reserved keywords. Structured programming is supported by if(-else) conditional execution and by do-while, while, and for iterative execution (looping). The for statement has separate initialization, testing, and reinitialization expressions, any or all of which can be omitted. break and continue can be used to leave the innermost enclosing loop statement or skip to its reinitialization. There is also a non-structured goto statement which branches directly to the designated label within the function. switch selects a case to be executed based on the value of an integer expression.

Expressions can use a variety of built-in operators and may contain function calls. The order in which arguments to functions and operands to most operators are evaluated is unspecified. The evaluations may even be interleaved. However, all side effects (including storage to variables) will occur before the next "sequence point"; sequence points include the end of each expression statement, and the entry to and return from each function call. Sequence points also occur during evaluation of expressions containing certain operators (&&, ||, ?: and the comma operator). This permits a high degree of object code optimization by the compiler, but requires C programmers to take more care to obtain reliable results than is needed for other programming languages.

Kernighan and Ritchie say in the Introduction of The C Programming Language: "C, like any other language, has its blemishes. Some of the operators have the wrong precedence; some parts of the syntax could be better."[23] The C standard did not attempt to correct many of these blemishes, because of the impact of such changes on already existing software.

---

#### RESERVED WORDS

C89 has 32 reserved words, also known as keywords, which are the words that cannot be used for any purposes other than those for which they are predefined:
```break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static structs witch typedef union unsigned void volatile while```

---

### DATATYPES
The type system in C is static and weakly typed, which makes it similar to the type system of ALGOL descendants such as Pascal.[30] There are built-in types for integers of various sizes, both signed and unsigned, floating-point numbers, and enumerated types (enum). Integer type char is often used for single-byte characters. C99 added a boolean datatype. There are also derived types including arrays, pointers, records (struct), and unions (union).

C is often used in low-level systems programming where escapes from the type system may be necessary. The compiler attempts to ensure type correctness of most expressions, but the programmer can override the checks in various ways, either by using a type cast to explicitly convert a value from one type to another, or by using pointers or unions to reinterpret the underlying bits of a data object in some other way.

Some find C's declaration syntax unintuitive, particularly for function pointers. (Ritchie's idea was to declare identifiers in contexts resembling their use: "declaration reflects use".)[31]

C's usual arithmetic conversions allow for efficient code to be generated, but can sometimes produce unexpected results. For example, a comparison of signed and unsigned integers of equal width requires a conversion of the signed value to unsigned. This can generate unexpected results if the signed value is negative.

Pointers	Edit
C supports the use of pointers, a type of reference that records the address or location of an object or function in memory. Pointers can be dereferenced to access data stored at the address pointed to, or to invoke a pointed-to function. Pointers can be manipulated using assignment or pointer arithmetic. The run-time representation of a pointer value is typically a raw memory address (perhaps augmented by an offset-within-word field), but since a pointer's type includes the type of the thing pointed to, expressions including pointers can be type-checked at compile time. Pointer arithmetic is automatically scaled by the size of the pointed-to data type. Pointers are used for many purposes in C. Text strings are commonly manipulated using pointers into arrays of characters. Dynamic memory allocation is performed using pointers. Many data types, such as trees, are commonly implemented as dynamically allocated struct objects linked together using pointers. Pointers to functions are useful for passing functions as arguments to higher-order functions (such as qsort or bsearch) or as callbacks to be invoked by event handlers.[29]

A null pointer value explicitly points to no valid location. Dereferencing a null pointer value is undefined, often resulting in a segmentation fault. Null pointer values are useful for indicating special cases such as no "next" pointer in the final node of a linked list, or as an error indication from functions returning pointers. In appropriate contexts in source code, such as for assigning to a pointer variable, a null pointer constant can be written as 0, with or without explicit casting to a pointer type, or as the NULL macro defined by several standard headers. In conditional contexts, null pointer values evaluate to false, while all other pointer values evaluate to true.

Void pointers (void *) point to objects of unspecified type, and can therefore be used as "generic" data pointers. Since the size and type of the pointed-to object is not known, void pointers cannot be dereferenced, nor is pointer arithmetic on them allowed, although they can easily be (and in many contexts implicitly are) converted to and from any other object pointer type.[29]

Careless use of pointers is potentially dangerous. Because they are typically unchecked, a pointer variable can be made to point to any arbitrary location, which can cause undesirable effects. Although properly used pointers point to safe places, they can be made to point to unsafe places by using invalid pointer arithmetic; the objects they point to may continue to be used after deallocation (dangling pointers); they may be used without having been initialized (wild pointers); or they may be directly assigned an unsafe value using a cast, union, or through another corrupt pointer. In general, C is permissive in allowing manipulation of and conversion between pointer types, although compilers typically provide options for various levels of checking. Some other programming languages address these problems by using more restrictive reference types.

---
### ARRAY'S
Array types in C are traditionally of a fixed, static size specified at compile time. (The more recent C99 standard also allows a form of variable-length arrays.) However, it is also possible to allocate a block of memory (of arbitrary size) at run-time, using the standard library's malloc function, and treat it as an array. C's unification of arrays and pointers means that declared arrays and these dynamically allocated simulated arrays are virtually interchangeable.

Since arrays are always accessed (in effect) via pointers, array accesses are typically not checked against the underlying array size, although some compilers may provide bounds checking as an option.[32][33] Array bounds violations are therefore possible and rather common in carelessly written code, and can lead to various repercussions, including illegal memory accesses, corruption of data, buffer overruns, and run-time exceptions. If bounds checking is desired, it must be done manually.

C does not have a special provision for declaring multi-dimensional arrays, but rather relies on recursion within the type system to declare arrays of arrays, which effectively accomplishes the same thing. The index values of the resulting "multi-dimensional array" can be thought of as increasing in row-major order.

Multi-dimensional arrays are commonly used in numerical algorithms (mainly from applied linear algebra) to store matrices. The structure of the C array is well suited to this particular task. However, since arrays are passed merely as pointers, the bounds of the array must be known fixed values or else explicitly passed to any subroutine that requires them, and dynamically sized arrays of arrays cannot be accessed using double indexing. (A workaround for this is to allocate the array with an additional "row vector" of pointers to the columns.)

C99 introduced "variable-length arrays" which address some, but not all, of the issues with ordinary C arrays


> CREDITS: https://en.m.wikipedia.org/wiki/C_(programming_language)#:~:text=C%20%28%2F%20s%20i%CB%90%20%2F%2C%20as%20in%20the,for%20computer%20architectures%20that%20range%20from%20supercomputers%20

# WORK IN PROGRESS (WIP.)
