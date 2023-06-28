#include "main.h"

/**
 * print_HEX_auxiliary - Prints a hexadecimal number.
 * @num: The number to print.
 * Return: The number of digits printed.
 */
int print_HEX_auxiliary(unsigned int num)
{
    int i;
    int *array;
    int counter = 0;
    unsigned int temp = num;

    while (num / 16 != 0)
    {
        num /= 16;
        counter++;
    }
    counter++;
    array = malloc(counter * sizeof(int));

    for (i = 0; i < counter; i++)
    {
        array[i] = temp % 16;
        temp /= 16;
    }
    for (i = counter - 1; i >= 0; i--)
    {
        if (array[i] > 9)
            _print_character(array[i] + 7);
        else
            _print_character(array[i] + '0');
    }
    free(array);
    return counter;
}
