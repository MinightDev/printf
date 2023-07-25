# Custom _printf Function

This project is a custom implementation of the `_printf` function, which mimics the behavior of the standard C library function `printf`. The collaborators on this project are MinightDev and SoufianeAziz.

## Files:

1. **functions.c**: Contains functions to handle printing of various data types, such as strings, integers, hexadecimals, octals, addresses, and binary.
2. **main.h**: Header file containing function prototypes and necessary includes.
3. **_printf.c**: The main implementation of the custom `_printf` function.
4. **handlers.c**: Contains helper functions to handle different conversion specifiers for custom functionality like ROT13 encryption, binary printing, reversed string printing, etc.
5. **testing/main.c**: A test program to demonstrate the functionality of the custom `_printf` function.

## Functionality:

The custom `_printf` function supports the following conversion specifiers:

- `%c`: For printing characters.
- `%s`: For printing strings.
- `%d` and `%i`: For printing signed integers.
- `%u`: For printing unsigned integers.
- `%x` and `%X`: For printing hexadecimal numbers (lowercase and uppercase, respectively).
- `%o`: For printing octal numbers.
- `%p`: For printing addresses.
- `%b`: For printing binary representation of unsigned integers.
- `%S`: For printing strings with special handling for non-printable characters (replaced with hexadecimal escape sequences).
- `%r`: For printing strings in reverse.
- `%R`: For printing strings with ROT13 encryption.

## How to Use:

1. Include the `"main.h"` header in your source file.
2. Call the `_printf` function with the desired format string and any additional arguments corresponding to the format specifiers.

## Example Usage:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s! This is a test program.\n", "Developer");
    _printf("Decimal: %d, Hexadecimal: %x\n", 123, 123);
    _printf("Address: %p\n", (void *)0x7ffe637541f0);
    _printf("Binary: %b\n", 10);
    _printf("Non-printable: %S\n", "Best\nSchool");
    _printf("Reversed: %r\n", "Hello");
    _printf("ROT13: %R\n", "Hello world");

    return (0);
}
```

## Contributors:

- MinightDev
- SoufianeAziz

For any issues or improvements, feel free to contact the collaborators. Happy coding!
