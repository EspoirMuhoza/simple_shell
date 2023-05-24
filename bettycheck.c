#include "shell.h"
/**
 * binary_to_uint - My function to change binary
 * @b: constant
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int base = 1, x = 0;

if (!b)
return (0);

while (b[x + 1])
if (b[x] != '0' && b[x] != '1')
{
return (0);
x++;
}

while (!(x < 0))
{
result = result + ((b[x] - '0') * base);
base = base * 2;
x--;
}
return (result);

}

