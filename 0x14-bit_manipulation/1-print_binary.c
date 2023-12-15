#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int bnr[64], i;

	while (!n)
		_putchar(0);
	for (i = size; i >= 0; i--)
	{
		bnr[i] = n & 1;
		n >>= 1;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(bnr[i] + '0');
	}
	_putchar('\n');
}
