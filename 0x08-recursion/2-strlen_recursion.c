#include "main.h"

/**
 * _strlen_recursion - Finds the length of a string
 * @s: String to find the length
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
