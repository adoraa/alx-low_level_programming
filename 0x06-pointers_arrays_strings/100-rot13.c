#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
