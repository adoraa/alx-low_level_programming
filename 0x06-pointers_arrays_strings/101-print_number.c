#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer value to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1, n2, i;

	if (n < 0)
	{
		_putchar(45);
		n1 = n * -1;
	}
	else
		n1 = n;
	n2 = n1;
	i = 1;
	while (n2 > 9)
	{
		n2 /= 10;
		i *= 10;
	}
	for (; i >= 1; i /= 10)
	{
		_putchar(((n1 / i) % 10) + 48);
	}
}
