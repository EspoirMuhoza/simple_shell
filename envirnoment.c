#include "shell.h"

/**
 * _getenvirnoment - Function that Get the value of an environment variable
 * @name: Name
 *
 * Return: Value of the environment
 */
char *_getenvirnoment(const char *name)
{
	char **envelo;
	size_t name_len = _strlen(name);

	for (envelo = environ; *envelo != NULL; envelo++)
	{
		if (_strncmp(*envelo, name, name_len) == 0 && (*envelo)[name_len] == '=')
		{
			return (&(*envelo)[name_len + 1]);
		}
	}

	return (NULL);
}
