#include "main.h"

/**
 * print_numbers - Prints from 0 to 9 plus a new line
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
