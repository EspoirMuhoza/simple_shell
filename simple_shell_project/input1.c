#include "shell.h"

static char *last;
/**
 * input1 - Check for the line of input from user.
 *
 * Return: Pointer
*/
char *input1(void)
{
	char *in = NULL;
	size_t input_size = 0;
	ssize_t unread;

	do {
		prompt();
		unread = getline(&in, &input_size, stdin);

		if (unread == -1)
		{
			free(in);
			_puts("\n");
			return (NULL);
		}
		in[unread - 1] = '\0';

	} while (in[0] == '\0' || isspace(in[0]));

	last = in;
	return (in);
}

