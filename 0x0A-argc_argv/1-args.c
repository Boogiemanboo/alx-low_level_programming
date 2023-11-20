#include "main.h"
#include <stdio.h>

/**
 * task_1 - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int task_1(int argc, char *argv[] __attribute__((unused)))
{
    printf("%d\n", argc - 1);
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
    return task_1(argc, argv);
}
