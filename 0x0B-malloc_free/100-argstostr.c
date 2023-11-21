#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		total_len += len + 1; /* Add 1 for the space between arguments */
		len = 0;
	}

	concat = malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	/* Copy each argument to the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concat[len++] = av[i][j];

		concat[len++] = '\n'; /* Add newline after each argument */
	}

	concat[len] = '\0';

	return (concat);
}
