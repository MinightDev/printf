#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: The format string
 * Return: The number of characters printted
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);

	count = handle_formats(format, args);

	va_end(args);
	return (count);
}
