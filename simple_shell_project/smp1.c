#include "shell.h"
/**
* builtin_function_check - Function that checks if it is built in
 * @args: the arguments
 *
 * Return: return One if its true otherwise return zero.
 */
int builtin_function_check(char **args)
{
	if (!args[0])
		return (0);
	if (!_strcmp(args[0], "exit"))
		shell_quit(args);
	else if (!_strcmp(args[0], "env"))
		shell_envirnoment();
	else if (!_strcmp(args[0], "setenv"))
		shell_setenv(args);
	else if (!_strcmp(args[0], "unsetenv"))
		shell_unsetenv(args);
	else if (!_strcmp(args[0], "help"))
		shell_helping();
	else if (!_strcmp(args[0], "cd"))
		shell_command_check(args);
	else if (!_strcmp(args[0], "clear"))
		shell_claudine(args);
	else
		return (0);
	return (1);
}
