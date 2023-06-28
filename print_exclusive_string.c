#include "main.h"

/**
 * printf_exclusive_string - Prints an exclusive string.
 * @val: Arguments containing the string to be printed.
 * Return: The length of the string.
 */
int printf_exclusive_string(va_list val)
{
    char *s;
    int i, len = 0;
    int cast;

    s = va_arg(val, char *);
    if (s == NULL)
        s = "(null)";
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] < 32 || s[i] >= 127)
        {
            print_character('\\');
            print_character('x');
            len += 2;
            cast = s[i];
            if (cast < 16)
            {
                print_character('0');
                len++;
            }
            len += print_HEX_aux(cast);
        }
        else
        {
            print_character(s[i]);
            len++;
        }
    }
    return len;
}

