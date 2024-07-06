#include "main.h"

/**
 * strring_toupper - Converts lower case to upper case
 * @s: string to convert
 * Return: Upeer
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
