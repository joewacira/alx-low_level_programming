#include "main.h"
/**
 * reverse_array - reverses array of ints
 * @a: array
 * @n: no. of elements in an array
 * Return: (void)
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
