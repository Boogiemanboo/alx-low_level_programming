#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * task_3 - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int task_3(int argc, char *argv[])
{
    if (argc == 3)
    {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        printf("%d\n", num1 * num2);
        return 0;
    }
    else
    {
        printf("Error\n");
        return 1;
    }
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
    return task_3(argc, argv);
}
