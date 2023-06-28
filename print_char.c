#include "print_header.h"

/**
 * print_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int print_char(va_list val)
{
    char s;

    s = va_arg(val, int);
    return print_character(s);
}
