#include "main.h"
/**
 * _atoi - String to Int
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int i, min, sign;
	unsigned int n;

	i = 0;
	min = 1;
	sign = 0;
	n = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			sign = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (sign == 1)
		{
			break;
		}
		i++;
	}
	n *= min;
	return (n);
}
