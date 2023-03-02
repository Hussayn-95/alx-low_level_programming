#include "main.h"
/**
 * _strcat - combine two strings
 * @s: input
 * return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen[dest];

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i +  j] = src[i];
	}
	dest[i + j} = '\0';
	return (dest);

}
