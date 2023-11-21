#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: input string
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, word_count = 0, len = 0, start = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    /* Count the number of words in the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            word_count++;
    }

    words = malloc((word_count + 1) * sizeof(char *));

    if (words == NULL)
        return (NULL);

    /* Allocate memory for each word */
    for (i = 0, k = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            start = i;
            len = 0;

            while (str[i] != ' ' && str[i] != '\0')
            {
                len++;
                i++;
            }

            words[k] = malloc((len + 1) * sizeof(char));

            if (words[k] == NULL)
            {
                for (j = 0; j < k; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

            for (j = 0; j < len; j++)
                words[k][j] = str[start + j];

            words[k][j] = '\0';
            k++;
        }
    }

    words[k] = NULL;

    return (words);
}
