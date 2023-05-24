#include "shell.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: the stringth
 *
 * Return: length
 */
int _strlen(const char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;
	return (x);
}
