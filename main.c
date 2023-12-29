#define _GNU_SOURCE
#include "monty.h"
/**
 * data - global variable data
*/
data_t data;

/**
 * main - main function to carry the monty program
 * @agc: argument count
 * @agv: argument vector
 * Return: 0 on success
 * ........1 on Fail
*/

int main(int agc, char **agv)
{
ssize_t n_read = 1;
size_t length = 0;
stack_t *stack = NULL;

memset((void *) &data, 0, sizeof(data));
if (agc != 2)
push_error(12);
data.filename = agv[1];
data.fp = fopen(data.filename, "r");
if (data.fp == NULL)
push_error(13);
while ((n_read = getline(&data.line, &length, data.fp)) > 0)
{
if (*data.line == '\n')
continue;
data.line_number++;
free(data.args);
if (split_line() < 0)
continue;
if (*data.args == NULL)
continue;
process_line(&stack);
}
free_data();
free_dlistint(stack);
return (EXIT_SUCCESS);
}
#undef _GNU_SOURCE
