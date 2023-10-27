#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int ch, count;
	int length = 0;
	char temp;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		length++;
	}
	count  = length - 1;

	for (ch = 0; ch < length / 2; ch++)
	{
		temp = s[ch];
		s[ch] = s[count];
		s[count--] = temp;
	}
}
