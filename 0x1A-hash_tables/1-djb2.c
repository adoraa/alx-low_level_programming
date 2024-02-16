#include "hash_tables.h"
/**
 * hash_djb2 - Hash function using the djb2 algorithm
 * @str: The input string to be hashed
 * Return: hash value calculated using the djb2 algorithm
 * for the given input
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 0;
	int i;

	while ((i = *str++))
	{
		hash = ((hash << 6) + (hash << 16) - hash) + i;
	}
	return (hash);
}
