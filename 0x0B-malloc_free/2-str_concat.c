#include "main.h"
#include <stdlib.h>

/**
 * str_len - Return the len string.
 * @str: input string.
 * Return: The len string.
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')

	{
	len++;
	}
	return (len);
}
/**
 * str_copy - Copy a source string from source.
 * @src: source of the string.
 * @dest: The destination string.
 */
void str_copy(char *src, char *dest)
{
	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*dest = '\0';
}

/**
 * str_concat - Concatenate 2 strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: A newly allocated string of concatenated (s1) and (s2).
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	int len1 = str_len(s1);
	int len2 = str_len(s2);

	char *concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
	return (NULL);

	str_copy(s1, concatenated);
	str_copy(s2, concatenated + len1);

	return (concatenated);
}
