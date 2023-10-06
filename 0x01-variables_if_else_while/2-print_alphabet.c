#include <stdio.h>

/**
 * main - entry point of a program.
 *
 * Return: 0 means the pragram run successfully.
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');

	return (0);
}
