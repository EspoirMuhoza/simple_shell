#include "shell.h"

/**
 * handle_sigint - (Ctrl+C)
 * @sig: Signal
 *
 * Return: Nothing
 */
void handle_sigint(int sig)
{
	(void) sig;
	_putchar('\n');
	prompt();
}

/**
 * handle_sigquit - (Ctrl+\)
 * @sig: Signal
 *
 * Return: Nothing
 */
void handle_sigquit(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 * handle_sigstp - (Ctrl+Z)
 * @sig: Signal
 *
 * Return: Nothing
 */
void handle_sigstp(int sig)
{
	(void) sig;
	_puts("\n");
	prompt();
}
