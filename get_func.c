#include "monty.h"
/**
 * get_func - funtion that check if string is iqual to opcode
 * @str: opcode string
 *
 * Return: 0 if false, something else oth
 */
void (*get_func(char *str))(stack_t **stack, unsigned int line_number)
{
	instruction_t insfun[] = {
		{"push", push_func},
		{"pall", pall_func},
		{"pint", pint_func},
		{"pop", pop_func},
		{"swap", swap_func},
		{"add", add_func},
		{"nop", nop_func},
		{"sub", sub_func},
		{"div", div_func},
		{"mul", mul_func},
		{"mod", mod_func},
		{"pchar", pchar_func},
		{"pstr", pstr_func},
		{"rotl", rotl_func},
		{"rotr", rotr_func},
		{"stack", stack_func},
		{"queue", queue_func},
		{NULL, NULL}
	};

	int i = 0;
	int ret;

	while (i < 9)
	{
		ret = strcmp(insfun[i].opcode, str);
		if (ret == 0)
			return (insfun[i].f);
		i++;
	}
	return (NULL);
}
