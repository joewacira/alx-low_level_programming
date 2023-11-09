#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of all its params.
 * @n: The num of params passed to the func.
 * @...: A variable num of params to calculate the sum of.
 * Return: If n == 0 - 0.
 * Else - the sum of all params.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;


	va_start(ap, n);


	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);


	va_end(ap);


	return (sum);
}
