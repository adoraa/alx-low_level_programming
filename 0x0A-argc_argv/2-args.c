#include <stdio.h>
/**
 * main -  prints all the argument it receives
 * @argc: argument counter
 * @argv: array of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
