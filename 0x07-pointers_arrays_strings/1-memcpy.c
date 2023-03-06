#include "main.h"
/**
 * _memcpy - copying n from src to dest
 * @dest: destination
 * @src: source
 * @n: size of bytes 
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
		src[i] = dest[i];
	
	return (dest);
}
