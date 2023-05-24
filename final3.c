#include "shell.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer
 */
char *_strcat(char *dest, const char *src)
{
	char *rett = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (rett);
}
