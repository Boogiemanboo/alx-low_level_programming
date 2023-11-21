#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to the newly allocated space containing the concatenated string,
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i, j, k, len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    concat = malloc((len1 + len2 + 1) * sizeof(char));

    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0, k = len1; j <= len2; j++, k++)
        concat[k] = s2[j];

    return (concat);
}
