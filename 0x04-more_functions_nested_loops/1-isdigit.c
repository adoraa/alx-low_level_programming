#include "main.h"
/**
 * _isdigit - Checks if input is a number between
 * 0 to 9
 * @c: Input to be checked
 * Return: returns 1 if check is true, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
