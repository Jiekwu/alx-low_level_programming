#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (j = 'a'; j <= 'e'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
