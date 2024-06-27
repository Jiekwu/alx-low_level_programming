#include "main.h"

/**
 * _isupper - Prints an upper case letter
 * @c: A function parameter
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
