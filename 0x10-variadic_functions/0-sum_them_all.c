#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all its parameters
 * @n: The number of parameters
 * @...: A variable number of parameters to calculate the sum of
 * Return: 0 or 1
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
