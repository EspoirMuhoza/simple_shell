#include "shell.h"

/**
 * getter - Function that returns the value of the path
 *
 * Return: Pointer
 *
 * Writer: Espoir
 */

char *getter(void)
{
	return (_getenvirnoment("PATH"));
}
