#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @i: first parameter, it can be either be negative or positive
 * Description: print +, 0, or - depending on number along with the return
 * Return: returns 1 or 0 or -1 depending on the value of print_sign
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

