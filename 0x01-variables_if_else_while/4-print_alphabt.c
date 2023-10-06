#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Main entry of the program.
 *
 * Return: return value of 0, if the program runs successfully.
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
