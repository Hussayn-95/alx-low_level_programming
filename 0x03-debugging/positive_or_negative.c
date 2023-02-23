#include "main.h"
/**
 * positive_or_negative - function to check positive or negative interger
 * @i: the number to be checked
 *
 * Return: 0 always
 */


void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
