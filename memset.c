#include "shell.h"

/**
 **_memset - the functio that fills memory with a constant byte
 *@s: the pointer
 *@b: byte
 *@n: the amount of bytes
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
