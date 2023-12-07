#include "lists.h"
/**
 * _putchar - writes a character to stdout
 * @c: character to be printed out
 * Return: returns 1 on success.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
