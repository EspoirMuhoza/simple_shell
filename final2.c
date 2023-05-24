#include "shell.h"

/**
 * _strcpy - function that  copies a string
 * @dest: destination
 * @src: the source
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = 0;
	return (dest);
}
