#include "main.h"
#include <stddef.h>
/**
 * _memset - fills the first n bytes of the memory
 * @c: the value
 * @s: A pointer to the memory
 * @n: The number of bytes to be filled
 * Return: a pointer to be filled @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	char *memory = s;

	value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
