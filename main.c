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
	FILE *fp = NULL;
	size_t lenght = 0;
	char *command = NULL;
	char *tokens = NULL;
	unsigned int line_number;
	stack_t *stack = NULL;

	fp = fopen(argv[1], "r");
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		fclose(fp);
		exit(EXIT_FAILURE);
	}

	line_number = 0;

	if (fp == NULL)
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	while (getline(&command, &lenght, fp) != -1)
	{
		tokens = strtok(command, " \t\n");
		var_g.opcode = tokens;
		tokens = strtok(NULL, " \t\n");
		if (tokens)
			var_g.num = atoi(tokens);
		get_func(var_g.opcode)(&stack, line_number);
		line_number++;
	}
	fclose(fp);
	free(tokens);
	return (0);
}
