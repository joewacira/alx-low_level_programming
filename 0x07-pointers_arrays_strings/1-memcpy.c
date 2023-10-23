#include "main.h"

/**
  * _memcpy - main func prototype
  *
  * @src: Source param
  *
  * @dest: Destination param
  *
  * @n: Function param
  *
  * Return: Copy of memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
