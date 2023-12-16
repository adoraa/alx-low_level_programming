#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8 - 1;
	unsigned long int bnr = 1UL << size;
	int i = 0;

	if (!n)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	while (bnr > 0)
	{
		if (n & bnr)
		{
			_putchar('1');
			i = 1;
		}
		else if (i)
			_putchar('0');
		bnr >>= 1;
	}
	_putchar('\n');
}
