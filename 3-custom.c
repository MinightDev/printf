#include "main.h"
/**
 * print_binary - Prints an unsigned integer as binary.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_binary(unsigned int num)
{
	int i = 0;
	int arr[32];
	int j = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		arr[j] = num % 2;
		num /= 2;
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}

	return (j);
}
/**
 * print_S - Prints a string with special handling for S
 * @str: The string to be printed.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int print_S(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (print_string("(null)"));

	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[(unsigned char)str[i] / 16]);
			_putchar("0123456789ABCDEF"[(unsigned char)str[i] % 16]);
		}
		i++;
	}
	return (i);
}
/**
 * reversed - Prints a reversed string to the standard output.
 * @str: The string to be printed in reverse.
 *
 * Return: The number of characters printed.
 */
int reversed(const char *str)
{
	int j = 0, i;

	while (str[j])
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);

	return (j);
}
/**
 * _rot13 - Prints a ROT13-encrypted string to the standard output.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _rot13(const char *str)
{
	int i = 0;
	char chars;

	if (str == NULL)
		return (print_string("(null)"));

	while (str[i])
	{
		chars = str[i];

		if ((chars >= 'a' && chars <= 'z') || (chars >= 'A' && chars <= 'Z'))
		{
			if ((chars >= 'a' && chars <= 'm') || (chars >= 'A' && chars <= 'M'))
				chars += 13;
			else
				chars -= 13;
		}

		_putchar(chars);
		i++;
	}

	return (i);
}
