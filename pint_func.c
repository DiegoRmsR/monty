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

	tmp = *stack;
	if (*stack == NULL)
	{
		fclose(var_g.fd);
                free(var_g.command);
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", tmp->n);
}
