#include "main.h"

/**
 * print_binary - prints a binary number.
 * @val: arguments.
 * Return: number of characters printed.
 */
int print_binary(va_list val)
{
    int flag = 0;
    int count = 0;
    int i, a = 1, b;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int p;

    for (i = 0; i < 32; i++)
    {
        p = ((a << (31 - i)) & num);
        if (p >> (31 - i))
            flag = 1;
        if (flag)
        {
            b = p >> (31 - i);
            print_character(b + '0');
            count++;
        }
    }
    if (count == 0)
    {
        count++;
        print_character('0');
    }
    return (count);
}
