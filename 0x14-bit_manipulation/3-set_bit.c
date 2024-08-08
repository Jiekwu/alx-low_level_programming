#include "main.h"

/**
 * set_bit - Setsthe value of a bitto 1 at a given index
 * @n: Number to set
 * @index: Index at which to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
