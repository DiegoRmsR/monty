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
		fclose(var_g.fd);
		free(var_g.command);
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = tmp->next;
	if (tmp->next != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
