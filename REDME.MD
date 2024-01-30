# libftprintf.a - Custom Printf Implementation

## Description
`libftprintf.a` is a custom C library that contains a function called `ft_printf`, which is designed to mimic the behavior of the standard `printf` function found in the C library. This project is part of your curriculum, and it aims to implement a subset of `printf`'s functionality. The library provides the ability to format and print text with various conversions and specifiers.

## Table of Contents
- [Project Details](#project-details)
- [Usage](#usage)
- [Supported Conversions](#supported-conversions)
- [Makefile Commands](#makefile-commands)
- [Author](#author)


## Project Details
- **Program Name**: libftprintf.a
- **Turn-in Files**: Makefile, *.h, */*.h, *.c, */*.c
- **Makefile Targets**: NAME, all, clean, fclean, re
- **External Functions**: malloc, free, write, va_start, va_arg, va_copy, va_end
- **Libft Authorized**: Yes
- **Description**: Implement a custom `ft_printf` function that emulates the behavior of the original `printf`. Handle various conversions and format specifiers.

## Usage
To use the `ft_printf` function in your C program, you need to include the appropriate header files and link against `libftprintf.a`. Here's a basic example:

```c
#include "libftprintf.h"

int main() {
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return 0;
}
```
## Supported Conversions

The ft_printf function supports the following conversion specifiers:

%c: Prints a single character.
%s: Prints a string.
%p: Prints a void pointer in hexadecimal format.
%d and %i: Prints a decimal (base 10) number.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase format.
%X: Prints a number in hexadecimal (base 16) uppercase format.
%%: Prints a percent sign.

Makefile Commands

make NAME: Displays the program name.
make all: Compiles the library and creates libftprintf.a.
make clean: Removes object files.
make fclean: Removes object files and the library.
make re: Rebuilds the library.

## Author
ID : Bamssaye
