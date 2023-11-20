#include "main.h"
#include <stdio.h>

/**
 * task_2 - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int task_2(int argc, char *argv[] __attribute__((unused)))
{
    int i;

    for (i = 0; i < argc; i++)
        printf("%s\n", argv[i]);

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
    return task_2(argc, argv);
}
