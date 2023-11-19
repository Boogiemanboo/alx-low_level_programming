#include "main.h"
#include <string.h>
#include <stddef.h>  // Include the <stddef.h> header for NULL

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (strchr(accept, *s))
            return s;
        s++;
    }

    return NULL;
}
