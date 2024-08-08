#include "main.h"

/**
 * get_bit - A program that returns the value of a bit at a agiven index
 * @n: Number at which to check the bit
 * @index: Index at which to check
 * Return: Value of the bit or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
