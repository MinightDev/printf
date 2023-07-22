#include "main.h"
/**
 * print_hexa - Prints an unsigned integer as a hexa.
 * @num: The unsigned integer to be printed.
 * @uppercase: If 1, prints hexadecimal in uppercase; otherwise, in lowercase.
 *
 * Return: The number of characters printed.
 */
int print_hexa(unsigned int num, int uppercase)
{
	int i = 0;

	char Upper[] = "0123456789ABCDEF";
	char lower[] = "0123456789abcdef";

	char *digits = uppercase ? Upper : lower;
	unsigned int xf = 0xF;

	if (num >= 16)
	{
		i += print_hexa(num / 16, uppercase);
	}

	_putchar(digits[num & xf]);
	i++;

	return (i);
}
/**
 * print_unsigned_int - Prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_unsigned_int(unsigned int num)
{
	int i = 0;
	unsigned int j = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num / j >= 10)
		j *= 10;

	while (j != 0)
	{
		_putchar(num / j + '0');
		i++;
		num %= j;
		j /= 10;
	}

	return (i);
}
/**
 * print_octal - Prints an octal.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int num)
{
	int i = 0;
	unsigned int j = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num / j >= 8)
		j *= 8;

	while (j != 0)
	{
		_putchar(num / j + '0');
		i++;
		num %= j;
		j /= 8;
	}

	return (i);
}
/**
 * print_addr - Prints an address.
 * @ptr: The pointer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_addr(void *ptr)
{
	unsigned long int address = (unsigned long int)ptr;
	int i = 0, j;
	char arr_hex[16];

	if (ptr == NULL)
	{
		return (print_string("(nil)"));
	}

	_putchar('0');
	_putchar('x');

	if (address == 0)
	{
		_putchar('0');
		return (3);
	}

	while (address != 0)
	{
		int rem = address % 16;

		arr_hex[i++] = (rem < 10) ? (rem + '0') : (rem - 10 + 'a');
		address /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr_hex[j]);
	}

	return (i + 2);
}
