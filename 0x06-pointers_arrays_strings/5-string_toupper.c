#include "main.h"
/**
 * string_toupper - relacing lowercase to uppercase
 * @m: input
 * Return: m
 */
char *string_toupper(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] >= 'a' && m[i] < 'Z')
			m[i] = (int)m[i] - 32;
	}
	return (m);
}
