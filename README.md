# Programming in C

A structured collection of **C programming notes, examples, practice programs, and problem-solving exercises** covering the fundamentals of C through advanced programming concepts.

This repository is intended for students and beginners who want to learn C programming systematically and strengthen their programming fundamentals.

## 📚 Contents

The repository covers topics including:

* Introduction to C and its history
* C as a high-level language
* Variables, constants, and keywords
* Data types and type modifiers
* Input and output operations
* Format specifiers
* Instructions and operators
* Decision-making statements
* Loop control instructions
* Functions
* Arrays
* Strings
* Pointers
* Structures
* Unions
* Enumerations
* Typedef
* Dynamic memory allocation
* File handling
* Error handling
* Exception-handling concepts in C
* Practical programming problems
* MCQs and output-based questions

The study material also includes practical examples and programs for applying the concepts covered in each topic. 

## 🗂️ Suggested Repository Structure

```text
Programming-in-C/
│
├── README.md
│
├── 01-Introduction/
├── 02-Variables-Constants-Keywords/
├── 03-Data-Types/
├── 04-Input-Output/
├── 05-Operators/
├── 06-Decision-Control/
├── 07-Loops/
├── 08-Functions/
├── 09-Arrays/
├── 10-Strings/
├── 11-Pointers/
├── 12-Structures/
├── 13-Unions/
├── 14-Enums-Typedef/
├── 15-Dynamic-Memory/
├── 16-File-Handling/
├── 17-Error-Handling/
│
├── Practice/
│   ├── Basic-Programs/
│   ├── Pattern-Programs/
│   ├── Array-Problems/
│   ├── String-Problems/
│   └── Pointer-Problems/
│
├── MCQs/
│
└── Resources/
```

## 🎯 Learning Goals

By completing this repository, you should be able to:

* Understand the fundamentals of C programming
* Write, compile, and execute C programs
* Work with variables and different data types
* Take input and produce formatted output
* Use operators and control statements
* Implement loops and repetitive logic
* Create and use functions
* Work with arrays and strings
* Understand pointers and memory addresses
* Use structures, unions, enums, and typedef
* Manage memory dynamically
* Perform file operations
* Handle common programming errors
* Solve programming problems using C

## 💻 Basic C Program

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}
```

The notes introduce this basic program while explaining components such as header files, `main()`, comments, statements, `printf()`, and `return`. 

## 🔧 Requirements

You need a C compiler to compile and run the programs.

Recommended options:

* GCC
* Clang
* MinGW
* Visual Studio Code with a C compiler
* Code::Blocks

### Compile with GCC

```bash
gcc program.c -o program
```

### Run

**Windows:**

```bash
program.exe
```

**Linux/macOS:**

```bash
./program
```

## 📝 Practice

The repository contains programming exercises designed to improve problem-solving skills.

Examples include:

* Rectangle area calculation
* Circle and cylinder calculations
* Temperature conversion
* Simple interest
* Leap-year checking
* Character classification
* Finding the greatest number
* Array operations
* String manipulation
* Pointer-based programs

## 🧠 Important Concepts

### Variables

Variables are named memory locations whose values can change during program execution. The notes cover local, global, static, automatic, and register variables, along with scope and lifetime. 

### Data Types

C supports basic, derived, user-defined, and void data types, including `int`, `char`, `float`, `double`, arrays, pointers, structures, unions, enums, and typedefs.

### Input & Output

The repository covers formatted and unformatted I/O using functions such as:

```c
printf()
scanf()
getchar()
putchar()
fgets()
puts()
```

The material also discusses format specifiers, field width, precision, escape sequences, and common I/O mistakes. 

### Arrays

Arrays store multiple values of the same data type in contiguous memory and are accessed using indexes starting from `0`. 

### Dynamic Memory Allocation

Dynamic memory allocation is covered using:

```c
malloc()
calloc()
realloc()
free()
```

Proper memory management, checking allocation results, and freeing allocated memory are important parts of this topic. 

## ⚠️ Common Mistakes

While practicing, pay particular attention to:

* Missing semicolons
* Incorrect format specifiers
* Using `=` instead of `==`
* Missing `&` in `scanf()`
* Array index out of bounds
* Uninitialized variables
* Incorrect pointer usage
* Memory leaks
* Dereferencing `NULL` pointers
* Forgetting to close files
* Ignoring function return values

The notes specifically emphasize checking return values, validating input, checking pointers, and cleaning up resources when handling errors. 

## 📖 Recommended Learning Approach

Follow the repository in this order:

1. Learn C fundamentals
2. Practice variables and data types
3. Master input/output
4. Learn operators
5. Practice conditional statements
6. Master loops
7. Learn functions
8. Practice arrays and strings
9. Understand pointers
10. Learn structures and unions
11. Study dynamic memory allocation
12. Learn file handling
13. Practice error handling
14. Solve programming problems
15. Attempt MCQs and output-based questions

## 📌 Notes

This repository is primarily intended for **educational and learning purposes**.

The accompanying study material contains explanations, examples, practical programs, and question-based exercises for learning C programming.

## 🤝 Contributing

If you find an error or have a useful improvement:

1. Fork this repository
2. Create a new branch
3. Make your changes
4. Commit your changes
5. Open a Pull Request

Suggestions for:

* Better examples
* Bug fixes
* Additional practice problems
* Improved explanations
* Additional MCQs

are welcome.

## ⭐ Support

If this repository helps you learn C programming, consider giving it a ⭐ on GitHub.

---

**Happy Coding! 💻**

> Learn the concept → Write the code → Compile → Debug → Practice → Repeat.

