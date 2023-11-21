#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: input string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient
 *         memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the newly allocated memory */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
