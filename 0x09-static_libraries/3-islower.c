#include "main.h"

/**
 * _islower - Checks for lower case
 * @c: paraneter to be checked
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
