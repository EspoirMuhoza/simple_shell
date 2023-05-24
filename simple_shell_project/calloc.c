#include "shell.h"

/**
 * _calloc - Function that allocate memory
 *
 * @nmemb: size of arr
 * @size: size of element to be allocated
 *
 * Return: pointer
 */






void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
