#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}
