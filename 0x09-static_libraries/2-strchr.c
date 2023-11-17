#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a String
 * @s: String to be searched
 * @c: character in the string being serached
 * Return: pointer to the matched character
 * Or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
