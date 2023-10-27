#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @i: first parameter
 * Description: Prints the absolute value of integers
 * Return: returns the value of i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
