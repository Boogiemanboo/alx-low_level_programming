#include "main.h"
#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
        printf("%s\n", argv[0]);

    return 0;
}
