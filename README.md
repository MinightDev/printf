# Custom printf Implementation

This is a custom implementation of the `printf` function in C, called `_printf`, which provides basic formatting capabilities. The project consists of several files:

- / **1-functions.c, 2-functions.c, 3-custom.c**: These files contain various functions used in the custom printf implementation, divided into multiple files for better organization.

- / **for_testing.txt**: This file is not used in the code and is likely provided as a placeholder for testing purposes.

- / **handlers.c**: This file contains functions to handle different custom format specifiers such as `%b`, `%S`, `%r`, and `%R`.

- / **main.c**: The main file contains the `main` function, which is used for testing the custom `_printf` function with various format strings.

- / **main.h**: The header file contains the function prototypes used in the implementation. It is included by other files to access function declarations.

- / **_printf.c**: The main implementation file contains the custom `_printf` function, which emulates the behavior of the standard `printf` function with limited format specifiers.

## Requirements

The project adheres to the following requirements:

- / **Editor**: You can use vi, vim, emacs as editors for writing the code.

- / **Compiler**: The code will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89.

- / **Coding Style**: The code follows the Betty style, which is a set of guidelines for writing clean and consistent code in C.

- / **New Line**: All files end with a new line.

- / **README.md**: A `README.md` file is included at the root of the project, providing information about the code and its usage.

- / **Header File**: All function prototypes are declared in `main.h`.

- / **Header Guards**: Header files have include guards to prevent multiple inclusion.

- / **Global Variables**: The code does not use global variables.

- **Function Limit**: Each file contains no more than 5 functions for better code organization.

- **Collaborators**: The collaborators MinightDev and SoufianeAziz are added to the project.

## Usage

To use the custom `_printf` function, follow these steps:

1. Include the `main.h` header in your source file.

2. Call the `_printf` function, passing the format string and any required arguments.

3. The function will output the formatted string to the standard output.

Note that the custom `_printf` function supports some basic format specifiers such as `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%p`, and `%%`, as well as some additional custom specifiers like `%b`, `%S`, `%r`, and `%R`.

Remember that the provided `main.c` file serves as an example for testing purposes, but you don't have to push it to your repository. The project will be compiled with a different `main.c` file during evaluation.

## Compilation

To compile the project, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.h *.c -o custom_printf
```

## Testing

You can test the custom `_printf` function by running the compiled executable:

```bash
./custom_printf
```

The test cases in the provided `main.c` file will be executed, and the output will be displayed on the console.

## Collaborators

- [MinightDev](https://github.com/MinightDev)
- [SoufianeAziz](https://github.com/SoufianeAziz)
