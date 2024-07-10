#include "main.h"

/**
 * _pow_recursion - Finds the power of a number raised to a number
 * @x: base
 * @y: power
 * Return: x  raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
