#include "main.h"

/**
 * print_rot13 - prints a string encoded in ROT13.
 * @args: arguments.
 * Return: the number of characters printed.
 */
int prinf_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, j, count = 0;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				count++;
				break;
			}
		}
		if (alphabet[j] == '\0')
		{
			_putchar(str[i]);
			count++;
		}
	}

	return count;
}
