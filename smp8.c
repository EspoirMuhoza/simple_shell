#include "shell.h"

/**
 * shell_unsetenv - Function that Unset an environment variable
 *@args: argument
 *
 * Return: No return
 */
int shell_unsetenv(char **args)
{
	char *set;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VARIABLE\n");
		return (-1);
	}

	set = args[1];

	if (!(unsetenv(set) == 0))
	{
		_puterror("unsetenv");
	}
	return (0);
}
