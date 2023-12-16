#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: the number of bits you would need to flip to get from
 * one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int i = 0;

	while (val)
	{
		i += val & 1;
		val >>= 1;
	}
	return (i);
}
