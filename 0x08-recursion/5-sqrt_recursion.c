#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: number to be squared
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates the natural square root of a number
 * @n: number to be squared
 * @i: Iterate number
 * Return: The natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	else if (sqrt == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
