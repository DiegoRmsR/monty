#include "monty.h"
struct_g var_g;
/**
 * main - runs monty interpreter
 * @argc: counts of arguments
 * @argv: vector
 * Return: -1 if fails
*/
int main(int argc, char **argv)
{
	size_t lenght = 0;
	char *tokens = NULL;
	unsigned int line_number;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	var_g.fd = fopen(argv[1], "r");

	line_number = 0;

	if (var_g.fd == NULL)
	{
		fclose(var_g.fd);
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&var_g.command, &lenght, var_g.fd) != -1)
	{
		tokens = strtok(var_g.command, " \t\n");
		var_g.opcode = tokens;
		if (!var_g.opcode)
		{
			fclose(var_g.fd);
			dprintf(2, "L%u: ", line_number);
			dprintf(2, "unknown instruction %s\n", var_g.opcode);
			free(var_g.command);
			exit(EXIT_FAILURE);
		}
		tokens = strtok(NULL, " \t\n");
		if (tokens)
			var_g.num = atoi(tokens);
		get_func(var_g.opcode)(&stack, line_number);
		line_number++;
	}
	fclose(var_g.fd);
	free(var_g.command);
	free(tokens);
	return (0);
}
