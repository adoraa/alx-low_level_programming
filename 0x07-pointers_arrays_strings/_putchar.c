#include "main.h"
#include <unistd>
/**
 * _putchar - Writes a character to stdout
 * @c: character to be printed
 * Return: returns 1
 * On error, -1 is returned and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
