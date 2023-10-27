#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Checks if input is a number between
 * 0 to 9
 * @c: Input to be checked
 * Return: returns 1 if check is true, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/**
 * findnum - Checks if string contains a number between
 * 0 to 9
 * @s: string to be checked
 * Return: returns 1 if check is true, else 0
 */
int findnum(char *s)
{
	unsigned int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	i = 0;

	while (i < length)
	{
		if (!_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
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
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int stoi;
	int sum = 0;

	while (count < argc)
	{
		if (findnum(argv[count]))

		{
			stoi = _atoi(argv[count]);
			sum += stoi;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	printf("%d\n", sum);
	return (0);
}
