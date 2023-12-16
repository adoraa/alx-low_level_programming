#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index
 * @n: bit to be checked
 * @index: given index
 * Return: the value of the bit at index index or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = 1;

	val <<= index;
	if (index == 0)
		return ((*n) & 1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= val;
	return (1);
}
