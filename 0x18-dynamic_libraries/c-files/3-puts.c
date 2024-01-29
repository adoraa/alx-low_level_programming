#include "main.h"
/**
 * _puts - prints a string
 * @str: String to be printed
 * Return: void
 */
void _puts(char *str)
{
	int ch;

	for (ch = 0; str[ch] != '\0'; ch++)
		_putchar(str[ch]);
	_putchar('\n');
}
