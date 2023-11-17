#include "main.h"
/**
 * _strcat - strcat; concatenates two Strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a pointer to the resulting String dest
 */
char *_strcat(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}
	dest[count + i] = '\0';
	return (dest);
}
