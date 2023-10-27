#include <stdio.h>
/**
 * main - main function
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int count = 1;

	for (i = 0; i < 8; i++)
		for (j = i + 1; j < 9; j++)
			for (k = j + 1; k < 10; k++)
			{
				if (i != j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
					count++;
				}
			}
	putchar('\n');
	return (0);
}
