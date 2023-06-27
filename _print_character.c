#include "print_header.h"

/**
 * print_character - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, the number of characters written (1).
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_character(char c)
{
	return (write(1, &c, 1));
}

