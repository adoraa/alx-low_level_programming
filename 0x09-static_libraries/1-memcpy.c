#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination object
 * @src: source object
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n && *src != '\0'; p++)
	{
		dest[p] = src[p];
	}
	for (; p < n; p++)
	{
		dest[p] = '\0';
	}
	return (dest);
}
