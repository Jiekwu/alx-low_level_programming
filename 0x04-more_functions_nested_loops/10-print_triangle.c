#include "main.h"

/**
 * print_triangle - how to [print a triangle
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
	{ for (j = size - i; j > 1; j--)
	{
		_putchar(12);
	}
	for (k = 0; k <= i; k++)
	{
		_putchar(35);
	}
	}
	}
}
