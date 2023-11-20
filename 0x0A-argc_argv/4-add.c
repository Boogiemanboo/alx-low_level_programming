#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * task_4 - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int task_4(int argc, char *argv[] __attribute__((unused)))
{
    int i, sum = 0;

    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
            int num = atoi(argv[i]);

            if (num == 0 && argv[i][0] != '0')
            {
                printf("Error\n");
                return 1;
            }

            sum += num;
        }

        printf("%d\n", sum);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    /* Call the task-specific function */
    return task_4(argc, argv);
}
