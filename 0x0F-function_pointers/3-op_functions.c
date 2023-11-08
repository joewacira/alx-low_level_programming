#include "3-calc.h"


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);


/**
 * op_add - Returns the 2 of two nums.
 * @a: The 1st num.
 * @b: The 2nd num.
 *
 * Return: The sum of a & b.
 */
	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
 * op_sub - Returns the difference of 2 nums.
 * @a: The 1st num.
 * @b: The 2nd num.
 *
 * Return: The difference of a and b.
 */
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
 * op_mul - Returns the product of 2 num.
 * @a: The 1st num.
 * @b: The 2nd num.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of 2 nums.
 * @a: The 1st num.
 * @b: The 2nd num.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of 2 nums.
 * @a: The 1st num.
 * @b: The 2nd num.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

