#include "shell.h"

/**
 * main - Deal with a simple shell
 *
 * Return: exit
 */
int main(void)
{
	char *input;
	char **args;
	int stat;

	signal(SIGINT, handle_sigint);
	signal(SIGQUIT, handle_sigquit);
	signal(SIGTSTP, handle_sigstp);

	do {
		input = input1();
		if (!input || !*input)
			break;

		args = tokenize_input(input);
		if (!args || !*args)
		{
			free(input);
			free_tokens(args);
			continue;
		}
		stat = done(args);
		free(input);
		free_tokens(args);
stat = 1;
	} while (stat);

	return (EXIT_SUCCESS);
}
