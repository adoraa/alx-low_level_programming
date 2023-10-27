#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: the character to be printed out
 * Return: returns 1
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
