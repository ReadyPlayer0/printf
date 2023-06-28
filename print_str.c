/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

/**
 * _strlenc - Returns the length of a constant string.
 * @s: Type constant char pointer.
 * Return: Length of the string.
 */
int _strlenc(const char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

