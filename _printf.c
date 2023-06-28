#include "main.h"

/**
 * _printf - selects the correct function to print based on the format specifier.
 * @format: format specifier string.
 * Return: the number of characters printed.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_decimal}, {"%r", print_reverse_string},
		{"%R", print_rot13}, {"%b", print_binary}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	/* Check for invalid format or empty format*/
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	/* Loop through the format string*/
	while (format[i] != '\0')
	{
		j = 13;
		/* Check each format specifier in the convert_match array*/
		while (j >= 0)
		{
			/* Match the format specifier with the convert_match entry*/
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args); /* Call the corresponding print function*/
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]); /* Print regular characters*/
		len++;
		i++;
	}
Here:
	va_end(args);
	return (len);
}
