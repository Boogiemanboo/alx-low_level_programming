#include "main.h"

/**
 * _strcpy - Copies a string (including the null byte) to another.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *temp = dest;
    while ((*dest++ = *src++))
        ;
    return temp;
}
