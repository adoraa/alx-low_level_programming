#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string to be checked
 * Return: string length
 */
int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary digit to be converted
 * Return: the converted number, or 0 if there is one
 * or more chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, i, len;

	while (!b)
	{
		return (0);
	}
	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			val = (val << 1) | 1;
		if (b[i] == '0')
			val = val << 1;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (val);
}
