#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index
 * @n: bit to be checked
 * @index: given index
 * Return: the value of the bit at index index or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = 1UL;

	if (index == 0)
	{
		*n |= val;
		return (1);
	}
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	val <<= index;
	*n |= val;
	return (1);
}
