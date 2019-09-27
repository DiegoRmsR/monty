#include "monty.h"
/**
 * pall_func - prints all the elements of a dlistint_t list
 * @stack: head of nodos
 * @line_number: number of lines
 *
 * Return: void
 */
void pall_func(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	(void)line_number;
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
