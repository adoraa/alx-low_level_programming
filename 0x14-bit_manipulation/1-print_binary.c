#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bnr[64], i = 0;

	if (!n)
		_putchar(0);
	while (n)
	{
		bnr[i++] = n & 1;
		n >>= 1;
	}
	while (i >= 0)
	{
		_putchar(bnr[i] + '0');
		i--;
	}
	_putchar('\n');
}
