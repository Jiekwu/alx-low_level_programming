#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: number 1
 * @b: number 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
