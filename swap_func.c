#include "monty.h"
/**
 * swap_func - swaps the top two elements of the stack
 * @stack: Address of head
 * @line_number: numbes of lines
 *
 * Return: address of the new element
 */
void swap_func(stack_t **stack, unsigned int line_number)
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
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	(*stack)->next = tmp;
	(*stack)->prev = NULL;
}
