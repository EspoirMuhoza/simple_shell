#include "shell.h"

/**
 * shell_quit - Function to Exit the shell.
 * @args: Arguments.
 *
 * Return: Nothing to return
 * Writter: Espoir
 */
void shell_quit(char **args)
{
	int status;
	int verify = 0;

	if (args[1] != NULL)
	{
		verify = _atoi(args[1]);
	}
	free_tokens(args);
	input2();
	exit(status);
}
