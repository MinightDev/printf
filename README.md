**README.md**

# ALX _printf Function

![Contributor: minightdev](https://img.shields.io/badge/contributor-minightdev-blue)
![Contributor: soufianeaziz](https://img.shields.io/badge/contributor-soufianeaziz-blue)

This project contains a custom implementation of the `_printf` function, which mimics the behavior of the standard `printf` function in C. The goal of this project is to provide a simplified version of `printf` that supports `%s`, `%c`, `%d`, `%i`, and `%%` conversion specifiers.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

## Compilation

To compile the project, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.h *.c -o printf.exe
```

## Usage

You can use the `_printf` function in your code by including the `main.h` header file. The function follows the same format as the standard `printf` function and supports `%s`, `%c`, `%d`, `%i`, and `%%` conversion specifiers.

**Example:**

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n = 4;

	_printf("%s\n", "Hello world");
	
    _printf("%c\n", 'S');
	
	_printf("%d\n", n);
	
    _printf("%d\n", -n);
	
	_printf("%i\n", -n);

    return 0;
}
```

## Note

This implementation is a basic version of `printf` and does not handle all the features of the standard `printf` function. It aims to provide a simple demonstration of how the function can be implemented to handle specific conversion specifiers.

## Contributors

- minightdev ([GitHub](https://github.com/minightdev))
- soufianeaziz ([GitHub](https://github.com/soufianeaziz))

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
