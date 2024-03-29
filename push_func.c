#include "monty.h"
/**
 * push_func - adds a new node at the beginning of a dlistint_t
 * @stack: Address of head
 * @line_number: numbes of lines
 *
 * Return: address of the new element
 */
void push_func(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (!var_g.num)
	{
		fclose(var_g.fd);
		free(var_g.command);
		dprintf(2, "L%u: usage: push integer\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	if (!new)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = var_g.num;
	new->next = NULL;
	new->prev = NULL;
	if (*stack)
	{
		new->next = *stack;
		new->prev = NULL;
		if (new->next != NULL)
			new->next->prev = new;
		*stack = new;
	}
	else
		*stack = new;
}
