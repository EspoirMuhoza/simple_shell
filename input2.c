#include "shell.h"

/**
 * input2 - Frees the most recent input
 */
void input2(void)
{
	static char *last;

	free(last);
	last = NULL;
}
