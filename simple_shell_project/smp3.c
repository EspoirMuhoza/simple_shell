#include "shell.h"

/**
 * shell_claudine - function that clear the terminal.
 * @args: an array
 *
 * Return: return 1 to continue else 0
 * writter: Espoir
*/
int shell_claudine(char **args)
{
	(void)args; /* avoid "uncompleted parameter" warning */
	_puts("\033[2J\033[H");
	return (1);
}
