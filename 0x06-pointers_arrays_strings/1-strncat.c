#include "main.h"
/**
 * _strncat - Concatenates two strings,
 * using at most n bytes from src.
 * @dest: first parameter
 * @src: second parameter
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}
	dest[count + i] = '\0';
	return (dest);
}
