# 0x01. C - Variables, if, else, while

## Description

This project is part of the ALU low-level programming curriculum. It introduces variables, arithmetic operators, relational operators, logical operators, conditional statements, and while loops in C.

## Learning Objectives

- Understand arithmetic, relational, and logical operators.
- Declare and assign values to variables.
- Use `if`, `else if`, and `else` statements.
- Understand the ASCII character set.
- Print characters and numbers using `printf` and `putchar`.
- Use `while` loops to repeat instructions.
- Compile C programs using GCC.

## Tasks

| File | Description |
|---|---|
| `0-positive_or_negative.c` | Prints whether a randomly generated number is positive, negative, or zero. |
| `1-last_digit.c` | Prints the last digit of a randomly generated number and describes it. |
| `2-print_alphabet.c` | Prints the lowercase alphabet. |
| `3-print_alphabets.c` | Prints the lowercase alphabet followed by the uppercase alphabet. |
| `4-print_alphabt.c` | Prints the lowercase alphabet except `q` and `e`. |
| `5-print_numbers.c` | Prints single-digit base-10 numbers. |
| `6-print_numberz.c` | Prints single-digit numbers using `putchar` without a `char` variable. |
| `7-print_tebahpla.c` | Prints the lowercase alphabet in reverse. |
| `8-print_base16.c` | Prints hexadecimal digits in lowercase. |
| `9-print_comb.c` | Prints single-digit numbers separated by commas and spaces. |

## Compilation

Compile an individual source file using GCC:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o program
```

Run the compiled program:

```bash
./program
```

## Requirements

- Use the permitted C functions specified for each task.
- Follow the Betty coding style.
- Ensure every source file ends with a newline.
- Compile without warnings or errors using the required GCC flags.
- Do not use `system()`.
