#include "shell.h"

/**
 * prompt - Print shell
 *
 * Return: nothing
 */
void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
