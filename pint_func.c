#include "monty.h"
/**
 * pint_func - Function that pint prints the value at the top of the stack
 * @stack: head of nodos
 * @line_number: number of lines
 *
 * Return: value of top nodo
 */
void pint_func(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (line_number == 0)
	{
		fprintf(stderr, "%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	if (tmp != NULL)
		printf("%d\n", tmp->n);
}
