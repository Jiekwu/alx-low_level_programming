#include <stdio.h>
#include "main.h"

int _putchar(char c);

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: Void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
	_putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}

	if (num / 10 != 0)
	{
	print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

int _putchar(char c)
{
	return (c);
}
