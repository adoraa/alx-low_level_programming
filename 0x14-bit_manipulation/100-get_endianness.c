#include "main.h"
/**
 * get_endianness - checks the endianness [is integer stored]
 * with the MSB
 * Return: 0 for little endian or 1 for big endian
 */
int get_endianness(void)
{
	unsigned int which_endian = 1;
	char *check = (char *)&which_endian;

	return (*check);
}
