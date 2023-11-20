#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: The number of arguments passed to the program (unused).
 * @argv: An array of pointers to the arguments, where argv[0] is the program name.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    printf("%s\n", argv[0]);

    return (0);
}
