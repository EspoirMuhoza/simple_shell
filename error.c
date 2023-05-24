#include "shell.h"

/**
 *error - function that allocate pointer
 * @argv: pointer to a pointer to an array of pointers
 * @arg: pointer
 *
 * Return: nothing
 */
void error(char **argv, char *arg)
{
	int x;

	for (x = 0; argv[x]; x++)
		free(argv[x]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}
