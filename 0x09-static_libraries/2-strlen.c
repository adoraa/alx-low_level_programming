#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int ch;
	int length = 0;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		length++;
	}
	return (length);
}
