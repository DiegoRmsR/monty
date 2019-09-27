#include "monty.h"
/**
 * pop_func - deletes the element top list
 * @stack: head of nodo
 * @line_number: number of lines
 *
 * Return: void
 */
void pop_func(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = tmp->next;
	if (tmp->next != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
