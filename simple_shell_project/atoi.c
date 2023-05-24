#include "shell.h"

/**
 * _atoi -  Function that converts a string to an integer.
 * @str: The string
 *
 * Return: string
 */
int _atoi(const char *str)
{
	int x, sign;
	unsigned int number;

	x = 0;
	sign = 1;
	number = 0;

	while (str[x] != '\0')
	{
		if (str[x] == '-')
			sign *= -1;
		else if (str[x] >= '0' && str[x] <= '9')
			number = (number * 10) + (str[x] - '0');
		else
			break;
		x++;
	}
	return (number * sign);
}
