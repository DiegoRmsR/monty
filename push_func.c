#include "monty.h"
/**
 * push_func - adds a new node at the beginning of a dlistint_t
 * @head: Address of head
 * @line_number: numbes of lines
 *
 * Return: address of the new element
 */
stack_t *push_func(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	if (line_number == 0)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	new->global = global;
	new->next = *stack;
	new->prev = NULL;
	*stack = new;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
