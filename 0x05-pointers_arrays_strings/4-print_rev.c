#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int ch;
	int length = 0;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		length++;
	}
	for (ch = length - 1; ch >= 0; ch--)
	{
		_putchar(s[ch]);
	}
	_putchar('\n');
}
