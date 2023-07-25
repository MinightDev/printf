#include "main.h"
#include <limits.h>
/**
 * main - Entery point.
 *
 * Return: 0 Always success.
 */
int main(void)
{
	int binary = 10;
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%v]\n");
	_printf("Address [%p]\n", addr);
	printf("Address [%p]\n", addr);
	_printf("Binary: [%b]\n", binary);
	_printf("Octal: [%o]\n", binary);
	_printf("Non printable: [%S]\n", "Best\nSchool");
	_printf("Reversed: [%r]\n", "Hello");
	_printf("Rot13: [%R]\n", "Hello world");
	_printf("Rot13: [%R]\n", "Uryyb jbeyq");
	len = _printf("Percent:[%% ]\n");
	len2 = printf("Percent:[%% ]\n");
	_printf("Char: [% ]\n");
	_printf("Char: [% ]\n");
	_printf("%");
	return (0);
}
