#include <stdio.h>
/**
 * main - Prints buzz for multiples of 5 and
 * fizz for multiples of 3
 * Return: returns 0
 */
int main(void)
{
	int n = 1;

	printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d",  n);
		}
	}
	printf("\n");
	return (0);
}
