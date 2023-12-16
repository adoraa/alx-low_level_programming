#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index
 * @n: bit to be checked
 * @index: given index
 * Return: the value of the bit at index index or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (!index)
		val = ~1UL;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	else
		val = ~(1UL << index);
	*n &= val;
	return (1);
}
