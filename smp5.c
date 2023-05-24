#include "shell.h"

/**
 * shell_envirnoment - Function that prints all the environment
 * of the shell
 * Return: nothing
 */
int shell_envirnoment(void)
{
	int kuci;

	for (kuci = 0; environ[kuci]; kuci++)
	{
		_puts(environ[kuci]);
		_putchar('\n');
	}

	return (0);
}
