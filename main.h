#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int _putchar(char c);
int print_string(const char *str);
int print_int(int num);
int print_unsigned_int(unsigned int num);
int print_hexa(unsigned int num, int uppercase);
int print_binary(unsigned int num);
int print_octal(unsigned int num);
int print_S(const char *str);
int reversed(const char *str);
int _rot13(const char *str);
int print_addr(void *ptr);
int handle_custom_specifiers(const char *format, va_list args);
int handle_specifiers(const char *format, va_list args);
int handle_specifiers_2(const char *format, va_list args);
int handle_formats(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
