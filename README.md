ft_printf

This project was developed as part of the 42 curriculum by sgomec.

Description

The ft_printf project consists of recreating the standard C printf() function.

The main goal of this project is to understand and implement variadic functions in C, while learning how formatted output works under the hood.

The implementation reproduces the behavior of printf() for a selected set of format specifiers.

Supported Conversions
Specifier	Description
%c	Prints a single character.
%s	Prints a string.
%p	Prints a pointer address in hexadecimal format.
%d	Prints a signed decimal integer.
%i	Prints an integer in decimal format.
%u	Prints an unsigned decimal integer.
%x	Prints an unsigned hexadecimal number in lowercase.
%X	Prints an unsigned hexadecimal number in uppercase.
%%	Prints a literal percent sign.
Compilation

To compile the project and generate the static library libftprintf.a, run:

bash
make

Cleaning

Remove the object files:

bash
make clean


Remove the object files and the compiled library:

bash
make fclean

Rebuild

Remove previously generated files and rebuild the project:

bash
make re

Usage

Include the ft_printf.h header file in your C source code:

c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 42);
    return (0);
}


Compile your program by linking it with the generated static library:

bash
cc main.c libftprintf.a

Algorithm & Data Structures

The implementation follows a sequential parsing approach:

The format string is scanned character by character.
When a % character is encountered, the next character is checked to identify the requested conversion.
A va_list is used to access the corresponding variadic argument.
The appropriate conversion function handles the argument and prints the formatted output.

The implementation uses the following macros and functions from <stdarg.h>:

va_list: Stores the list of variadic arguments.
va_start(): Initializes the argument list.
va_arg(): Retrieves the next argument.
va_end(): Cleans up the argument list.

The format string is processed in O(n) time complexity, where n represents its length, assuming each conversion takes constant time.

Resources
man 3 printf
man 3 stdarg
C Programming Language documentation
AI Usage

AI tools were used as a learning aid throughout this project to clarify the concepts behind variadic functions, understand format specifiers and conversion rules, explore potential edge cases, and improve the README documentation.

All implementation decisions and code were reviewed as part of the learning process.