#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer
 * @n: parameter to be printed
 * Return: returns 0
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	} else
	{
		a = n;
	}

	if (a / 10)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + '0');
}
