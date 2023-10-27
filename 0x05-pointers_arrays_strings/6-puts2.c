#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int ch, length = 0;

	for (ch = 0; str[ch] != '\0'; ch++)
	{
		length++;
	}
	for (ch = 0; ch < length; ch += 2)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}
