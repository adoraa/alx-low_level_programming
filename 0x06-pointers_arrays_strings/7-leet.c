#include "main.h"
/**
 * leet - function that encodes String into 1337
 * @s: String input
 * Return: s
 */
char *leet(char *s)
{
	int i, count;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (count = 0; count < 10; count++)
		{
			if (s[i] == letters[count])
			{
				s[i] = numbers[count];
			}
		}
	}
	return (s);
}
