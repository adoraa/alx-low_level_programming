#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes characters to stdout
 * @c: character to be printed to stdout
 * Return: returns 1 on success, -1 on error and
 * sets errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
