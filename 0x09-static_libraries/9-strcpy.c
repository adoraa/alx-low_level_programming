#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - strcpy
 * @dest: destination parameter
 * @src: source parameter
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
