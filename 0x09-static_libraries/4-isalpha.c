#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: first parameter
 * Return: returns 1 or 0 depending on the value of _isalpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
