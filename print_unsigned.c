#include "main.h"
/**
 * printf_unsigned - Prints an unsigned integer.
 * @args: Argument to print.
 * Return: Number of characters printed.
 */
int print_unsigned(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
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

    return i;
}
