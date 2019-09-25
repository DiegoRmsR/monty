#include "lists.h"
int global;
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: nodos
 *
 * Return: void
 */
void pall_func(stack_t **stack, unsigned int line_number)
{
	size_t i = 0;

	if (line_number == 0)
	{
		fprintf(stderr, "%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
		i++;
	}
	return;
}
