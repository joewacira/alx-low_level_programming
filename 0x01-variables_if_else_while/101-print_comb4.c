#include <stdio.h>

/**
 * main - prints all diff combinations of 3 digits
 * Return: return of value 0 program success.
 */
int main(void)
{
	int x, y, l;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(l);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
