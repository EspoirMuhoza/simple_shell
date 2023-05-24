#include "shell.h"

/**
 * _memcpy -  My function that will copies memory area
 *
 * @dest: buffer
 * @src: copies
 * @n: number bytes
 *
 * Return: success 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
