#include<stdio.h>
/**
 * main - if else function
 * Return: 0 (always)
 */
int main(void)
{
	int x = 0;

	if (x < 0)
	{
		printf("is positive\n");
	}
	else if (x == 0)
	{
		printf("is zero\n");
	}
	else if (x > 0)
	{
		printf("is negative\n");
	}
	return (0);
}
