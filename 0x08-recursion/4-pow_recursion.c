#include "main.h"
/**
  * _pow_recursion - Function Name
  * @x: param 1
  * @y: param 2
  * Return: (value)
  */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);

	else if (y == 0)
	return (1);

	else
	return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
