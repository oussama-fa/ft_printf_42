# ft_printf_42 - Custom printf Implementation - ! no bonus

## Overview

Welcome to **ft_printf_42**, my custom implementation of the `printf` function, developed as part of the **42 Network -> 1337 KH** curriculum. The project’s goal was to recreate the core functionality of the `printf` function from the C standard library while enhancing my understanding of **variable arguments**, **formatted output**, and **memory management** in C.

The core idea behind this project was to build a minimalistic version of `printf`, capable of handling a variety of format specifiers like integers, strings, characters, and more, in a way that’s both efficient and flexible.

---

## Screenshots

Here are some screenshots of my project implementation:

<img src="100.png" alt="Project Screenshot 1" width="500"/>
<img src="corr.png" alt="Project Screenshot 2" width="700"/>

---

## Features

- Implements basic format specifiers such as:
  - `%c` - Char
  - `%s` - String
  - `%d`/`%i` - Integer
  - `%u` - Unsigned integer
  - `%x`/`%X` - Hexadecimal (lowercase/uppercase)
  - `%p` - Pointer
  - `%f` - Floating point (advanced challenge!)
  
- **Support for width and precision**:
  - Custom padding for fields and controlling the number of decimal places for floating point numbers.

- **Handling of variable arguments** using the `va_list`, `va_start`, `va_arg`, and `va_end` macros.

- Supports advanced formatting like handling negative numbers, special characters, and even formatting pointers properly.

---

## How to Use

To use this custom `printf`, simply include the `ft_printf.h` header and link with the `ft_printf.c` source file.

### Example:

```c
#include "ft_printf.h"

int main() {
    int d = 1337;
    char c = 'K';
    char cc = 'H';
	char	*name = "Oussama FARAH";
    ft_printf("Hello, I'm a %s Student in : %d : %c\n", name, d, c, cc);
    return 0;
}
