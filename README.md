# ft_printf

This project was created as part of the 42 curriculum by sgomec.

## Description

The ft_printf project consists of recreating the standard C printf() function. Its purpose is to understand variadic functions and learn how formatted output works in C.

## Supported Conversions

- `%c`: Prints a character.
- `%s`: Prints a string.
- `%p`: Prints a pointer address.
- `%d`: Prints a decimal integer.
- `%i`: Prints an integer.
- `%u`: Prints an unsigned integer.
- `%x`: Prints a lowercase hexadecimal number.
- `%X`: Prints an uppercase hexadecimal number.
- `%%`: Prints a percent sign.

## Instructions

### Compilation

```sh
make
```

Creates the static library libftprintf.a.

### Cleaning

```sh
make clean
make fclean
```

Removes object files and the compiled library.

### Rebuild

```sh
make re
```

Cleans and recompiles the project.

## Usage

Include ft_printf.h in your source file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 42);
    return (0);
}
```

Compile using:

```sh
cc main.c libftprintf.a
```

## Algorithm & Data Structures

The format string is scanned sequentially, one character at a time. When a % character is found, the next character determines which conversion should be performed.

A va_list is used to access the variable arguments. The va_start(), va_arg(), and va_end() macros are used to manage these arguments.

This approach provides a simple implementation with O(n) parsing complexity, where n represents the length of the format string.

## Resources

- man 3 printf
- man 3 stdarg

## AI Usage

AI was used to clarify variadic functions, understand conversion rules, discuss possible edge cases, and help prepare the README documentation.