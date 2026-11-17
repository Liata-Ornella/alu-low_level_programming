# File I/O

This project covers file input and output operations in C using system calls such as `open`, `read`, `write`, and `close`.

## Tasks

| File | Description |
|---|---|
| `0-read_textfile.c` | Reads a text file and prints its contents to standard output. |
| `1-create_file.c` | Creates a file and writes text content into it. |
| `2-append_text_to_file.c` | Appends text to an existing file. |
| `3-cp.c` | Copies the contents of one file into another. |
| `main.h` | Contains function prototypes and required headers. |

## Compilation

Compile the individual tasks using:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

Example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
```

## Usage

Run the copy program:

```bash
./cp file_from file_to
```

## Learning Objectives

- Understanding file descriptors.
- Opening and closing files.
- Reading and writing file contents.
- Handling file permissions and errors.
- Working with system calls in C.

## Author

Liata Ornella
