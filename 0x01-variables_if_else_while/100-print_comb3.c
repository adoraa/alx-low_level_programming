#include <stdio.h>
/**
 * main - main function
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int count = 1;

	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
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
