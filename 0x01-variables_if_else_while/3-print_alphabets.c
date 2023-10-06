#include <stdio.h>

/**
 * main - Marks the begining of a program.
 *
 * Return: 0, means the program has run successfully
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alphabet[x]);
	}
	putchar('\n');
	return (0);
}
