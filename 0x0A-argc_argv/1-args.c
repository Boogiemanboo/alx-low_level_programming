#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argv; /* Suppress unused parameter warning */

    printf("%d\n", argc - 1);

    return 0;
}
