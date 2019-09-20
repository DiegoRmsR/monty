#include "monty.h"

/**
 * main - runs monty interpreter
 * @argc: counts of arguments
 * @argv: vector
 * Return: -1 if fails
 */

int main(int argc, char **argv)
{
	FILE *fp;
	ssize_t read;
	size_t lenght;
	char *command, *token;
	unsigned int line_number;

	fp = fopen(argv[1], "r");

	if(argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read = getline(&command, &lenght, fp);

	while (read >= 0)
	{
		token = strtok(command, " \t\n");
		op = get_func(token);

		if (op == NULL)
		{
			fprintf(stdout, "ERROR\n");
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \t\n");
		global = atoi(token);
		return(op(global));

		line_number++;
	}
	fclose(fp);
	free (op)
	return(0);
}
