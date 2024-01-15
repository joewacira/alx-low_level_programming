#include "main.h"

/**
  * _strchr - main function of the program
  *
  * @s: Function param
  *
  * @c: Function param
  *
  * Return: (0) success
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
