#include "main.h"
/**
 * print_string - Print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int print_string(va_list val)
{
    char *s;
    int i, len;

    s = va_arg(val, char *);
    if (s == NULL)
    {
        s = "(null)";
        len = _strlen(s);
        for (i = 0; i < len; i++)
           _putchar(s[i]);
        return len;
    }
    else
    {
        len = _strlen(s);
        for (i = 0; i < len; i++)
           _putchar(s[i]);
        return len;
    }
}

