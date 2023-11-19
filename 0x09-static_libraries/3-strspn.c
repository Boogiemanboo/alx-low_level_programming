#include "main.h"
#include <string.h>  // Include the <string.h> header for strchr

/**
 * _strspn - Gets the length of a prefix substring consisting of
 * only characters found in accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s && strchr(accept, *s))
    {
        count++;
        s++;
    }

    return count;
}
