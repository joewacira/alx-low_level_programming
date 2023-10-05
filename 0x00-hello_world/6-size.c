#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int g;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
