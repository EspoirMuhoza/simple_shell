#include "shell.h"

/**
 * _strdup - function that duplicates a string
 * @str: the string
 *
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int len = 0;
	char *rett;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	rett = malloc(sizeof(char) * (len + 1));
	if (!rett)
		return (NULL);
	for (len++; len--;)
		rett[len] = *--str;
	return (rett);
}
