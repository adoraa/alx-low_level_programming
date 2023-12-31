#include <stdio.h>

/**
 * main - Entry point
 * Description: Sums the multiples of 3 or 5
 * within the range of 0 and 1024
 * Return: returns 0
 */

int main(void)
{
	int start_num, end_num, total;

	end_num = 1024;
	total = 0;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}

	printf("%d", total);
	printf("\n");

	return (0);
}
