#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: String to be capitalized
 * Return: s
 */
char *cap_string(char *s)
{
	int separators[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		for (count = 0; count < 13; count++)
		{
			if (s[i] == separators[count])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
