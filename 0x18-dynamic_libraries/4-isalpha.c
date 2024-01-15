#include "main.h"

/**
 * _isalpha - checks alphabetic char
 * @c: the char to be checked
 * Return: 1 if c is a letter, else 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
