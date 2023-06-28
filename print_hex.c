#include "main.h"

/**
 * printf_HEX - prints a hexadecimal number.
 * @val: arguments.
 * Return: the number of digits printed.
 */
int printf_HEX(va_list val)
{
    int i;
    int *array;
    int digitCount = 0;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;

    while (num / 16 != 0)
    {
        num /= 16;
        digitCount++;
    }
    digitCount++;
    array = malloc(digitCount * sizeof(int));

    for (i = 0; i < digitCount; i++)
    {
        array[i] = temp % 16;
        temp /= 16;
    }
    for (i = digitCount - 1; i >= 0; i--)
    {
        if (array[i] > 9)
            array[i] = array[i] + 7;
        print_character(array[i] + '0');
    }
    free(array);
    return digitCount;
}

