#include <stdio.h>
                
#include "main.h"             
/**
 * _putchar - writes character c to stdout         
 * @c: The character to print     
 * Return: success (1)
 * On error, -1 is returned and errno is set.              
 */
                
int _putchar(char c)
                
{
                
return (write(1, &c, 1));
                
}
