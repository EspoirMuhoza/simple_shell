#include "shell.h"








/**
 * path - Functio thatFrees the global variable
 *
 * Return: No return
 */
void path(void)
{
	if (environ != NULL)
	{
		size_t x = 0;

		while (!(environ[x] == NULL))
		{
			if (_strncmp(environ[x], "PATH=", 5) == 0)
			{
				free(environ[x]);
				environ[x] = NULL;
				break;
			}
			x++;
		}
	}
}
