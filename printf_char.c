#include "main.h"

/**
 * print_char - Prints a character.
 * @val: Arguments.
 *
 * Return: Always returns 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
