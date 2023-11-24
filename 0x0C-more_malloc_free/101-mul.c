#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	long mul;
	int i, j;

	while (argc != 3)
	{
		printf("Error\n");
		exit(9);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			while (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		i++;
	}
	mul = atoi(argv[1]) *  atoi(argv[2]);
	printf("%ld\n", mul);
	return (0);
}
