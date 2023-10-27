#include "main.h"
/**
 * puts_half - prints half of a String
 * @str: String to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int ch, length = 0;

	for (ch = 0; str[ch] != '\0'; ch++)
		length++;
	if (length % 2 == 1)
		ch = length / 2;
	else
		ch = (length - 1) / 2;
	for (ch++; ch < length; ch++)
		_putchar(str[ch]);
	_putchar('\n');
}
