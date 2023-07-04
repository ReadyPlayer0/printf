# print# Custom printf Implementation

This repository contains a custom implementation of the `printf` function in C. The implementation supports various format specifiers and can print formatted output to the standard output.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [File Descriptions](#file-descriptions)
- [Dependencies](#dependencies)
- [Building the Project](#building-the-project)
- [Example Usage](#example-usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The custom `printf` implementation provided in this project allows you to format and print output in a similar way to the standard `printf` function in C. It supports a variety of format specifiers, including `%d`, `%s`, `%c`, `%x`, `%X`, `%o`, `%u`, and more. Additionally, it handles special cases such as printing hexadecimal and octal numbers.

The implementation consists of several C source files, including `main.c`, `_putchar.c`, and additional files for handling specific format specifiers.

## Usage

To use the custom `printf` implementation in your own C programs, follow these steps:

1. Clone or download this repository to your local machine.
2. Include the necessary header file, `main.h`, in your C source file.
3. Compile the source files along with your program using a C compiler.

Ensure that the `main.h` file is accessible in the same directory as your source file or specify the correct path when including the header.

## Supported Format Specifiers

The custom `printf` implementation supports the following format specifiers:

- `%d` or `%i`: Print signed decimal integer.
- `%s`: Print string.
- `%c`: Print character.
- `%x` or `%X`: Print hexadecimal number (lowercase or uppercase).
- `%o`: Print octal number.
- `%u`: Print unsigned decimal integer.

## File Descriptions

- `main.c`: Contains the main function and the custom `printf` implementation.
- `_putchar.c`: Provides the `_putchar` function used for writing characters to the standard output.
- Additional source files: Contains functions to handle specific format specifiers, such as `printf_int.c`, `printf_string.c`, `printf_hex.c`, and so on.

## Dependencies

The custom `printf` implementation does not have any external dependencies.

## Building the Project

To build the project, follow these steps:

1. Ensure that you have a C compiler installed on your machine (e.g., GCC).
2. Navigate to the project directory.
3. Compile the source files using the following command:


Replace `printf_*.c` with the relevant source files for the format specifiers you want to include.

4. After successful compilation, an executable file named `custom_printf` will be generated.

## Example Usage

Here's an example demonstrating the usage of the custom `printf` implementation:

```c
#include "main.h"

int main(void) {
 int num = 42;
 char* str = "Hello, world!";
 
 printf("Integer: %d\n", num);
 printf("String: %s\n", str);
 
 return 0;
}

Integer: 42
String: Hello, world!

Contributing
Contributions to this project Daniel Oyakhilome and Adeyimika Adetunji 
