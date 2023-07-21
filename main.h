#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int print_string(const char *str);
int print_int(int num);
int handle_specifiers(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
