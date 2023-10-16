#include "main.h"
/**
 * _puts - prints a string to stdout\n
 * @str: print string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
