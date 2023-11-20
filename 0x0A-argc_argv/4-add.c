#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string consists of only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    int sum = 0, i;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (is_digit(argv[i]))
            sum += atoi(argv[i]);
        else
        {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}
