#include "function_pointers.h"
#include <stdio.h>

/**
 * main - Prints the opcodes of itself
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, index;
	int (*adress)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)adress;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		adress++;
	}

	printf("\n");

	return (0);
}
