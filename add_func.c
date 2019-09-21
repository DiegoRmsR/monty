#include "monty.h"
/**
 * add_func - add adds the top two elements of the stack.
 * @stack: Address of head
 * @line_number: numbes of lines
 *
 * Return: address of the new element
 */
void add_func(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	tmp->n += (*stack)->n;
	pop_func(stack, line_number);
}
