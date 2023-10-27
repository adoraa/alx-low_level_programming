#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to be written to stdout
 * Return: Returns 1. On error returns -1 and
 * errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
