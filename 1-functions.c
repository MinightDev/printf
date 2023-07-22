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
	static char buffer[BUFFER_SIZE];
	static int i;
	int j = 0;

	if (c == '\n' || i >= BUFFER_SIZE - 1)
	{
		buffer[i] = c;
		j = print_buffer(buffer, i + 1);
		i = 0;
	}
	else
	{
		buffer[i++] = c;
	}

	return (j);
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

	while (str[i] != '\0')
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
	int buffer[12];
	int i = 0;
	int negative = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num %= 1000000000;
		num = -num;
		i += 2;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		negative = 1;
	}
	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num != 0);

	while (i > 0)
		_putchar(buffer[--i]);

	return (i + negative);
}
/**
 * print_buffer - Writes a buffer to the standard output (stdout)
 * @buffer: The buffer containing the data to be written
 * @len: The length of the data in the buffer
 *
 * Return: The number of characters written
 */
int print_buffer(char *buffer, int len)
{
	int i = 0;

	/* Write data in chunks of BUFFER_SIZE */
	while (len > 0)
	{
		int size;

		if (len > BUFFER_SIZE)
		{
			size = BUFFER_SIZE;
		} else
		{
			size = len;
		}
		i += write(1, buffer, size);
		buffer = buffer + size;
		len = len - size;
	}
	return (i);
}
