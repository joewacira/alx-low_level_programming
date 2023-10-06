#include <stdio.h>

/**
 * main - Marks the entry point of this program.
 *
 * Return: 0, returns value 0 if program runs successfully
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alphabet[x]);
	}
	putchar('\n');

	return (0);
}
