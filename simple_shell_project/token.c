#include "shell.h"

/**
 * tokenize - function to parse input
 * @str: the string
 * @delim: the delimite
 *
 * Return: an array of pointer
 */
char **tokenize(char *str, const char *delim)
{
	char *toke = NULL;
	char **rett = NULL;
	int x = 0;

	toke = strtok(str, delim);
	while (toke)
	{
		rett = realloc(rett, sizeof(char *) * (x + 1));
		if (rett == NULL)
			return (NULL);

		rett[x] = malloc(_strlen(toke) + 1);
		if (!(rett[x]))
			return (NULL);

		_strcpy(rett[x], toke);
		toke = strtok(NULL, delim);
		x++;
	}
	rett = realloc(rett, (x + 1) * sizeof(char *));
	if (!rett)
		return (NULL);

	rett[x] = NULL;
	return (rett);
}

