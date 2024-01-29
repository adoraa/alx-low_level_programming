#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a String for any set of bytes
 * @s: String to be searched
 * @accept: String containing character to be matched
 * Return: pointer to the the character in s that
 * one of the characters in accept, or NULL if no
 * character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
