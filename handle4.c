#include "shell.h"

/**
 * done - Function to Execute a command
 * @argv: An array of string
 *
 * Return: The exit
 * Done By Espoir
 */
int done(char **argv)
{
	pid_t identical;
	int status = 0;
	char *command_path, *envp[2];

	if (argv == NULL || *argv == NULL)
		return (status);
	if (builtin_function_check(argv))
		return (status);

	identical = fork();
	if (identical < 0)
	{
		_puterror("fork");
		return (1);
	}
	if (identical == -1)
		perror(argv[0]), free_tokens(argv), input2();
	if (identical == 0)
	{
		envp[0] = getter();
		envp[1] = NULL;
		command_path = NULL;
		if (argv[0][0] != '/')
			command_path = pathfinding(argv[0]);
		if (command_path == NULL)
			command_path = argv[0];
		if (execve(command_path, argv, envp) == -1)
		{
			perror(argv[0]), free_tokens(argv), input2();
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			waitpid(identical, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (status);
}
