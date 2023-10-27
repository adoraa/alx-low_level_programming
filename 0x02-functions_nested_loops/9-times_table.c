#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: times table
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b < 10; b++)
		{
			c = (a * b);
		if ((c / 10) > 0)
		{
			_putchar((c / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((c % 10) + '0');
		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
}
