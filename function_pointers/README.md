# Function Pointers

This project covers function pointers in C programming. It demonstrates how to pass functions as arguments, execute functions through pointers, search arrays using callback functions, and build a simple calculator.

## Tasks

| File | Description |
|---|---|
| `0-print_name.c` | Prints a name using a function pointer. |
| `1-array_iterator.c` | Executes a function on every element of an array. |
| `2-int_index.c` | Searches for an integer using a comparison function. |
| `3-op_functions.c` | Contains addition, subtraction, multiplication, division, and modulo functions. |
| `3-get_op_func.c` | Selects the correct mathematical operation. |
| `3-main.c` | Main program for the simple calculator. |
| `function_pointers.h` | Contains function prototypes. |
| `3-calc.h` | Contains calculator structures and function prototypes. |

## Compilation

Compile the first three tasks:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
```

Compile the calculator:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

## Running the Calculator

```bash
./calc 1 + 1
./calc 1024 / 10
./calc 1024 '*' 98
./calc 1024 % 98
```

## Requirements

- Language: C
- Compiler: GCC or Clang
- Standard: GNU89
- Compilation flags: `-Wall -pedantic -Werror -Wextra`

## Author

Liata Ornella

African Leadership University (ALU)
