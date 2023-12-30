#include "monty.h"
/**
 * print_dlistint - prints all elements of a doubly list
 * @stack: the pointer to the head
 * @line_number: the line number
 *
 * Return: void
 */
void print_dlistint(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *cursor;

	cursor = *stack;
	if (cursor == NULL)
		return;
	while (cursor)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
