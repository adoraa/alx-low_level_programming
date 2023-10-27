#include "main.h"
/**
 *  _strlen_recursion - returns the length of a string
 * @s: the String to be checked
 * Return: the length of the String
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (length);
}
