#include "shell.h"

/**
 * _strspn - a function that gets the length
 *
 * @s: string
 * @accept: subst
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (!accept[y])
			return (x);
	}

	return (x);
}
