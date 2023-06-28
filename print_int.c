#include "main.h"

/**
 * print_int - Prints an integer.
 * @val: Argument to print.
 * Return: Number of characters printed.
 */
int print_int(va_list val)
{
	int n = va_arg(val, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		print_character('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			print_character(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	print_character(last + '0');

	return (i);
}

/**
 * print_dec - Prints a decimal.
 * @val: Argument to print.
 * Return: Number of characters printed.
 */
int print_dec(va_list val)
{
	int n = va_arg(val, int);
	int num, last = n % 10, digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		print_character('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			print_character(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	print_character(last + '0');

	return (i);
}
