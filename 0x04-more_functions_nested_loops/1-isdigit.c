#include "main.h"

/**
 * _isdigit - numbers from 0 to 9
 * @c: A function parameter
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
