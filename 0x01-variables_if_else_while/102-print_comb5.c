#include <stdio.h>
/**
 * main - print pairs of double digit combos
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			m = j + 1;
			k = i;
			while (k <= 9)
			{
				while (m <= 9)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(m + '0');
					if (i < 9 || j < 8 || k < 9 || m < 9)
					{
						putchar(',');
						putchar(' ');
					}
					m++;
				}
				m = 0;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
