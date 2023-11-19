#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of characters to append.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;

    while (*dest)
        dest++;

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';
    return temp;
}
