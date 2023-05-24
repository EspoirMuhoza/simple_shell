#include "shell.h"

/**
 * shell_command_check - Function that changes the current directory
 * @args: array
 * Writter: Espoir
 */
void shell_command_check(char **args)
{
	char *directory = args[1];
	int kuci;

	if (!directory)
	{
		directory = _getenvirnoment("HOME");
		if (!directory)
		{
			_puts("cd: The is No HOME directory found\n");
			return;
		}
	}

	kuci = chdir(directory);
	if (kuci == -1)
	{
		perror("cd");
	}
}
