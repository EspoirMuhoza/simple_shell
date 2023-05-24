#include "shell.h"

/**
 * _strncmp - Function that Compare two strings
 * @s1: First string
 * @s2: Second string
 * @n: characters to compare.
 *
 * Return: 0 if the strings are equal up to n chara
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char x1, x2;

	while (n-- > 0)
	{
		x1 = (unsigned char) *s1++;
		x2 = (unsigned char) *s2++;

		if (x1 != x2)
			return (x1 - x2);
		if (x1 == '\0')
			break;
	}

	return (0);
}

/**
 * _strstr - Fuction that checks if needle starts with haystack
 * @haystack: string
 * @needle: the substring
 *
 * Return: address
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			int j;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[x + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (&haystack[x]);
			}
		}
	}
	return (NULL);
}

/**
 * _strchr - Fuction that locates a character in a string
 *
 * @s: pointer
 * @c: character
 *
 * Return: Occurance
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (NULL);
}
