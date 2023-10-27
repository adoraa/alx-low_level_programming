#include "main.h"
/**
 * print_alphabet_x10 - prints all the alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char letter;

	while (j < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		j++;
	}
}
