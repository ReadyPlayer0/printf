#include "main.h"

/**
 * printf_srev - Function that prints a string in reverse.
 * @args: Type struct va_arg where printf arguments are allocated.
 *
 * Return: Number of characters printed.
 */
int printf_srev(va_list args)
{
    char *s = va_arg(args, char*);
    int i;
    int j = 0;

    if (s == NULL)
        s = "(null)";
    while (s[j] != '\0')
        j++;
    for (i = j - 1; i >= 0; i--)
        print_character(s[i]);
    return j;
}

