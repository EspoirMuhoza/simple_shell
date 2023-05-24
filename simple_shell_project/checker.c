#include "shell.h"

/**
 * _strcmp - Function that Compare two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if @s1 and @s2 are equal
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int) (*s1) - (*s2));
}
