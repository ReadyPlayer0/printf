#include "main.h"

/**
 * print_rot13 - Prints a string using the ROT13 cipher.
 * @args: Type struct va_arg where printf arguments are allocated.
 *
 * Return: Number of characters printed.
 */
int print_rot13(va_list args)
{
    int i, j, counter = 0;
    int k = 0;
    char *s = va_arg(args, char*);
    char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    if (s == NULL)
        s = "(null)";
    for (i = 0; s[i]; i++)
    {
        k = 0;
        for (j = 0; alpha[j] && !k; j++)
        {
            if (s[i] == alpha[j])
            {
               _putchar(beta[j]);
                counter++;
                k = 1;
            }
        }
        if (!k)
        {
           _putchar(s[i]);
            counter++;
        }
    }
    return counter;
}

