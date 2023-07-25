#include "main.h"
/**
 * handle_custom_specifiers - Handles custom conversion specifiers.
 * @format: The format string.
 * @args: The variable arguments list.
 *
 * Return: The number of characters processed from the format string.
 */
int handle_custom_specifiers(const char *format, va_list args)
{
	int i = 0;

	if (format[i] == 'b')
	{
		unsigned int num = va_arg(args, unsigned int);

		i += print_binary(num);
	}
	else if (format[i] == 'S')
	{
		const char *str = va_arg(args, const char *);

		i += print_S(str);
	}
	else if (format[i] == 'R')
	{
		const char *str = va_arg(args, const char *);

		i += _rot13(str);
	}
	else if (format[i] == 'r')
	{
		const char *str = va_arg(args, const char *);

		i += reversed(str);
	}
	else
	{
		_putchar('%');
		_putchar(format[i]);
		i++;
	}
	return (i);
}
/**
 * handle_specifiers_2 - Handles conversion specifiers 2.
 * @format: The format string
 * @args: The variable arguments list
 *
 * Return: The number of characters processed from the format string
 */
int handle_specifiers_2(const char *format, va_list args)
{
	int i = 0;

	if (format[i] == 'o')
	{
		unsigned int num = va_arg(args, unsigned int);

		i += print_octal(num);
	}
	else if (format[i] == 'p')
	{
		void *ptr = va_arg(args, void *);

		i += print_addr(ptr);
	}
	else if (format[i] == 'x' || format[i] == 'X')
	{
		unsigned int num = va_arg(args, unsigned int);
		int upper = (format[i] == 'X') ? 1 : 0;

		i += print_hexa(num, upper);
	}
	else
	{
		_putchar('%');
		_putchar(format[i]);
		i++;
	}
	return (i);
}
/**
 * handle_specifiers - Handles conversion specifiers in the format string
 * @format: The format string
 * @args: The variable arguments list
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
	else if (format[i] == 'u')
	{
		unsigned int num = va_arg(args, unsigned int);

		i += print_unsigned_int(num);
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
/**
 * handle_formats - Handles the format specifiers
 * @format: The format string
 * @args: The va_list of arguments
 * Return: The number of characters handled
 */
int handle_formats(const char *format, va_list args)
{
	int count = 0, i = 0;

	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == ' ')
			{
				return (-1);
			}
			if (format[i] == 'b' || format[i] == 'S' ||
					format[i] == 'r' || format[i] == 'R')
			{
				count += handle_custom_specifiers(&format[i], args);
			}
			else if (format[i] == 'o' || format[i] == 'p' ||
					format[i] == 'x' || format[i] == 'X')
			{
				count += handle_specifiers_2(&format[i], args);
			}
			else
			{
				count += handle_specifiers(&format[i], args);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
