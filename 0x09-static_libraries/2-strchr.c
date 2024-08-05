#include "main.h"

/**
 * _strchr - Locates character in a string
 * @s: string to be searched
 * @c: Character to search for in s
 * Return: s or NULL
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
