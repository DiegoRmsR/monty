#include "monty.h"

/**
 * get_func - check the valou
 * @stack: the integer to check
 *
 * Return: 0 if false, something else oth
 */
int (*get_func(char *string))(stack_t **stack, unsigned int line_number)
{
        instruction_t insfun[] = {
                {"push", push_func},
                {"pint", pint_func},
                {"pall", pall_func},
                {"pop", pop_func},
                {"swap", swap_func},
                {"add", add_func},
                {"nop", nop_func},
                {NULL, NULL}
        };

        int i = 0;

        while (i < 7)
        {
                int ret = strcmp(insfun[i].opcode[0], *string)
			if (ret == 0)
				return (insfun[i].f);
                i++;
        }
        return (NULL);
}
