#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i, j, len1 = 0, len2 = 0;

    /* Calculate the length of the first string */
    while (s1 && s1[len1] != '\0')
        len1++;

    /* Calculate the length of the second string */
    while (s2 && s2[len2] != '\0')
        len2++;

    concat = malloc((len1 + len2 + 1) * sizeof(char));

    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];

    concat[i + j] = '\0';

    return (concat);
}
