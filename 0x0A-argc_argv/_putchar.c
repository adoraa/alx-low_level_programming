#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes character to stdout
 * @c: character to be written to stdout
 * Return: returns 1 on success, -1 on error and
 * sets errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1)); 
}
