#include "main.h"
/**
 * _puts - main function
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar ('\n');
}
