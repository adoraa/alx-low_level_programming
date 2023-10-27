#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int ch;

	for (ch = 0; ch < n; ch++)
	{
		printf("%d", *(a + ch));
		if (ch != (n - 1))
			printf(", ");
	}
	printf("\n");
}
