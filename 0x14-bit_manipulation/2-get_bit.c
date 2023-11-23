#include"main.h"

/**
 * get_bit - function returns a value of bit at given index.
 * @n: num to check bits
 * @index: index to check bit
 *
 * Return: value of bit, else -1(error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
