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
 * print_string - Prints a string.
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int print_string(const char *str)
{
	int i = 0;

	if (str == NULL)
	{
		const char *null = "(null)";

		while (null[i] != '\0')
		{
			_putchar(null[i]);
			i++;
		}
	}
	else
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
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
	unsigned int abs_num;
	unsigned int j = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num == INT_MIN)
	{
		_putchar('-');
		i++;
		abs_num = (unsigned int)(-(INT_MIN + 1)) + 1;
	} else if (num < 0)
	{
		_putchar('-');
		abs_num = (unsigned int)(-num);
		i++;
	} else
	{
		abs_num = (unsigned int)num;
	}
	while (abs_num / j >= 10)
		j *= 10;
	while (j > 0)
	{
		_putchar(abs_num / j + '0');
		i++;
		abs_num %= j;
		j /= 10;
	}
	return (i);
}
