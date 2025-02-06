# Project: ft_printf

**[see it in Spanish 🇪🇸](https://github.com/carloscm02/42-Telefonica/blob/main/ft_printf/README.md)**

## Description

This project consists of implementing your own version of the famous `printf()` function from the C standard library. Through this exercise, you will learn how to work with variadic functions, meaning those that can accept a variable number of arguments.

The function `ft_printf()` must support a specific set of format conversions and replicate the behavior of `printf()` in a similar way, but without handling the buffer internally. This project is an excellent opportunity to improve your C programming skills and prepare your code for more complex future projects.

## Index

1. [Introduction](#introduction)
2. [General Instructions](#general-instructions)
3. [Implementation](#implementation)
4. [Supported Functions](#supported-functions)
5. [Compilation and Execution](#compilation-and-execution)
6. [Evaluation](#evaluation)
7. [License](#license)

## Introduction

In this project, you will reprogram the `printf()` function from C, replicating the functionality of the original `printf`, but with your own implementation. This exercise will allow you to learn about variadic functions in C, how to work with strings and numbers, and how to structure code that is both extensible and efficient.

## General Instructions

- The project must be written in C.
- You must follow the **Coding Norm** of your institution for code formatting and style.
- You must ensure that there are no **memory leaks**.
- The use of standard library functions is restricted; only functions like `malloc`, `free`, `write`, and functions related to variadic arguments (`va_start`, `va_arg`, `va_copy`, `va_end`) can be used.
- A **Makefile** must be provided to compile the project without relinking.

## Implementation

The main function of this project is `ft_printf()`, which takes a format string and a variable number of arguments. You need to implement the following format conversions:

- `%c` - Prints a single character.
- `%s` - Prints a string of characters.
- `%p` - Prints a pointer in hexadecimal format.
- `%d` and `%i` - Prints an integer in base 10 (decimal).
- `%u` - Prints an unsigned integer in base 10.
- `%x` - Prints an integer in hexadecimal format (lowercase).
- `%X` - Prints an integer in hexadecimal format (uppercase).
- `%%` - Prints the percent symbol (`%`).

### Code Structure

The code is organized into the following files:

- `ft_printf.c`: Implementation of the main `ft_printf()` function.
- `ft_utils.c`: Helper functions to handle type conversions.
- `ft_printf.h`: Header file with necessary declarations.
- `Makefile`: The build file to compile the project correctly.

## Supported Functions

The `ft_printf()` function supports the following types of conversions:

1. **%c**: Prints a single character.
2. **%s**: Prints a string of characters.
3. **%p**: Prints a pointer as a hexadecimal string.
4. **%d and %i**: Prints an integer in base 10.
5. **%u**: Prints an unsigned integer in base 10.
6. **%x**: Prints an integer in hexadecimal format (lowercase).
7. **%X**: Prints an integer in hexadecimal format (uppercase).
8. **%%**: Prints the percent symbol (`%`).

Each type of conversion is handled by a helper function that formats the values correctly and then prints them.

## Compilation and Execution

### To compile the project

1. **Clone this repository** to your local machine:

```bash
git clone https://github.com/carloscm02/42-Telefonica.git
cd ft_printf
```

2. **Compile the project** using the Makefile:
```bash
make
```

This will generate the `libftprintf.a` library that you can use to link with other C projects.

## To run the project
If you want to test the functionality of `ft_printf()`, create a test file where you can call your `ft_printf()` implementation as follows:

```c
Copiar
#include "ft_printf.h"

int main() {
    int num = 42;
    ft_printf("The value of num is: %d\n", num);
    return 0;
}
```

Compile and run your test file like this:

```bash
gcc -o test test.c -L. -lftprintf
./test
```

This should print something like:

```yaml
The value of num is: 42
```

## Evaluation
Your code will be evaluated based on the following criteria:

**Compliance with the coding norm:** The quality of the code, its organization, and style will be evaluated.
**Functionality:** Your `ft_printf()` must behave similarly to `printf()`, supporting all the required conversions.
**Efficient memory usage:** Make sure there are no memory leaks.
**Correct implementation of the conversions:** Each conversion must be formatted and displayed correctly.

## License
This project is under the MIT license.