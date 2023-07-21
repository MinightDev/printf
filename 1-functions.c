#include "main.h"
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set
 *         appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string to the standard output (stdout)
 * @str: The string to be printed
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int print_string(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (print_string("(null)"));

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * print_int - Prints an integer to the standard output (stdout)
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int print_int(int num)
{
	int i = 0;
	int div = 1;
	int is_negative = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		i++;
		num = -num;
		is_negative = 1;
	}

	while (num / div >= 10)
		div *= 10;

	while (div != 0)
	{
		_putchar(num / div + '0');
		i++;
		num %= div;
		div /= 10;
	}

	return (i + is_negative);
}

/**
 * handle_specifiers - Handles conversion specifiers in the format string
 * @format: The format string
 * @args: The variable arguments list
 *
 * Return: The number of characters processed from the format string
 */
int handle_specifiers(const char *format, va_list args)
{
	int i = 0;

	if (format[i] == 'c')
	{
		char ch = va_arg(args, int);

		_putchar(ch);
		i++;
	}
	else if (format[i] == 's')
	{
		const char *str = va_arg(args, const char *);

		i += print_string(str);
	}
	else if (format[i] == 'd' || format[i] == 'i')
	{
		int num = va_arg(args, int);

		i += print_int(num);
	}
	else if (format[i] == '%')
	{
		_putchar('%');
		i++;
	}
	else
	{
		_putchar('%');
		_putchar(format[i]);
		i++;
	}

	return (i);
}
