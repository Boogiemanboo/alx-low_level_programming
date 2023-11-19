#include "main.h"
#include <stddef.h>  // Include the <stddef.h> header for NULL

/**
 * _strstr - Locates a substring in another string.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *find = needle;

        while (*haystack && *find && (*haystack == *find))
        {
            haystack++;
            find++;
        }

        if (!*find)
            return start;

        haystack = start + 1;
    }

    return NULL;
}
