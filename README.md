# ft_printf - 42 School Project - 1337 KH

## Overview

**ft_printf** is a project from the **42 School** that requires re-implementing the standard `printf` function in C. The goal is to create a custom version of `printf` that handles various format specifiers while managing memory and output efficiently.

This project enhances skills in *variadic functions, buffer management*, and *formatted output processing*.

---

## Screenshots

Here are some screenshots of my project implementation:

<div align="center">
	<img src="100.png" alt="100 Successe" width="500"/>
	<img src="corr.png" alt="MOULINETTE" width="900"/>
</div>

---

## Features

- **Supports various format specifiers**:
	- `%c`     :- Char
	- `%s`     :- String
	- `%p`     :- Pointer
	- `%d`/`%i`: - Integer
	- `%u`     :- Unsigned integer
	- `%x`/`%X`: - Hexadecimal (lowercase/uppercase)
	- `%%`     :- Print a percent symbol
- **Support for width and precision**:
	- Custom padding for fields and controlling the number of decimal places for floating point numbers.
- **Handling of variable arguments** using the `va_list`, `va_start`, `va_arg`, and `va_end` macros.
- Efficient buffer management for optimized output performance.
- Works without the standard printf library function (`<stdio.h>`).

---

## How It Works

The function `ft_printf` processes a format string and replaces format specifiers with their corresponding values.

---

## Function Prototype:

``` int ft_printf(const char *format, ...); ```

---

## Key Concepts Used:

- Variadic functions with `<stdarg.h>`.
- String and character manipulation.
- Memory and buffer management.
- Base conversion for hexadecimal output.
---

### Example:

```c
#include "ft_printf.h"

int main()
{
	int		d = 1337;
	char	c = 'K';
	char	cc = 'H';
	char	*name = "Oussama FARAH";
	ft_printf("Hello, I'm a %s Student in : %d : %c\n", name, d, c, cc);
	return (0);
}
```
Output :
```bash
Hello, I'm a Oussama FARAH Student in : 1337 : KH
```

---

### Installation and Compilation:

`BUFFER_SIZE:` The size of the buffer used for reading data from the file descriptor. You can set this as a compile-time macro

1. Clone the repository:

```bash
git clone https://github.com/oussama-fa/ft_printf_42.git
cd ft_printf_42
```

2. Compile the project:

You must creat a main.c and `#include <ft_printf.h>`

```bash
make
```

You find `libftprintf.a`

```bash
	cc main.c libftprintf.a -o programe_name
```

3. Run the program:
```bash
./programe_name
```

---

## Author
*Oussama FARAH*

- 📱 **Instagram**: [@oussama._.farah](https://www.instagram.com/oussama._.farah/)
- ✉️ **Email**: [oussama05farah@gmail.com](mailto:oussama05farah@gmail.com)
