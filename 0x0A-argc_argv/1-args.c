#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: Always 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d", i);
	}

	return (0);
}
