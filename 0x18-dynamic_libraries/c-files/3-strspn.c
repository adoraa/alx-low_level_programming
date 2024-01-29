#include "main.h"
/**
 * _strspn - Gets the length of the first character found
 * @s: String to be checked
 * @accept: String containing the list of characters to
 * match s.
 * Return: number of bytes in the initial segemnt of s
 * that consist onlt of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0, m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				k = 0;
		}
		if (k == 0)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
		}
	}
	return (m);
}
