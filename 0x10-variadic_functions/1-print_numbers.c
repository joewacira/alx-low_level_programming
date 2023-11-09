#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - Prints nums, followed by  newline.
 * @separator: The string to be printed between nums.
 * @n: The num of ints passed to the func.
 * @...: A variable num of nums to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;


	va_start(nums, n);


	for (index = 0; index < n; index++)
	{
	printf("%d", va_arg(nums, int));


	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}


	printf("\n");


	va_end(nums);
}
