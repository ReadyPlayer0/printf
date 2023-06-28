#include "main.h"

/**
 * print_octal - Prints an octal number.
 * @val: Arguments.
 * Return: Number of characters printed.
 */
int print_octal(va_list val)
{
    int i;
    int *array;
    int counter = 0;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;

    while (num / 8 != 0)
    {
        num /= 8;
        counter++;
    }
    counter++;
    array = malloc(counter * sizeof(int));

    for (i = 0; i < counter; i++)
    {
        array[i] = temp % 8;
        temp /= 8;
    }
    for (i = counter - 1; i >= 0; i--)
    {
        print_character(array[i] + '0');
    }
    free(array);
    return counter;
}
