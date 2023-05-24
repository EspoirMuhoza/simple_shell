#include "shell.h"

/**
 * shell_setenv - Function that Set the value of an environment
 * @args: Arguments
 *
 * Return: no return
 * Writer: Espoir
 */
int shell_setenv(char **args)
{
	char *set, *get;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VARIABLE VALUE\n");
		return (-1);
	}

	set = args[1];
	get = args[2];

	if (setenv(set, get, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}
	return (0);
}
