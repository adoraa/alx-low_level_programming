#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	while (n)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
	_putchar('\n');
}
