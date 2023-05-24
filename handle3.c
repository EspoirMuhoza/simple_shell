#include "shell.h"

/**
 * pathfinding - Function to look for command in D
 * @command: pointer to command
 * Return: pointer
 *
 */






char *pathfinding(char *command)
{
	struct structure stat;
	int stat_ret, x;
	char buf[PATH_MAX_LENGTH], *path, *ret, **dir;

	path = getter();
	if (!path)
		return (NULL);
	dir = tokenize(path, PATH_SEPARATOR);
	if (!dir)
		return (NULL);
	for (x = 0; dir[x]; x++)
	{
		_memset(buf, 0, PATH_MAX_LENGTH);
		_strcpy(buf, dir[x]);
		_strcat(buf, "/");
		_strcat(buf, command);
		stat_ret = stat(buf, &stat);
		if (stat_ret == 0 && S_ISREG(stat.st_mode) && (stat.st_mode & S_IXUSR))
		{
			free_tokens(dir);
			ret = malloc(sizeof(char) * (strlen(buf) + 1));
			if (!ret)
				return (NULL);
			strcpy(ret, buf);
			return (ret);
		}
	}
	if (stat_ret == -1)
		free_tokens(dir);
	return (NULL);
}
