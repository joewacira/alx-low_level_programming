#include <stdio.h>

/**
 * main - the program prints numbers from 0-9.
 *
 * Return: 0, returns value of 0 if the program runs successfully.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');

	return (0);
}

