#include "main.h"

/**
 * print_pointer - Prints a hexadecimal number.
 * @val: Arguments.
 * Return: Number of characters printed.
 */
int print_pointer(va_list val)
{
    void *p;
    char *s = "(nil)";
    unsigned long int a;
    int b;
    int i;

    p = va_arg(val, void*);
    if (p == NULL)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
           _putchar(s[i]);
        }
        return i;
    }

    a = (unsigned long int)p;
   _putchar('0');
   _putchar('x');
    b = print_HEX_auxiliary(a);
    return (b + 2);
}
