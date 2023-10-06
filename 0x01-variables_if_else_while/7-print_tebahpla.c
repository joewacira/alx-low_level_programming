#include <stdio.h>

/**
 * main - entry point, prints the lowercase alphabet in reverse,
 * a new line follows
 * Return: return of value 0 success.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
