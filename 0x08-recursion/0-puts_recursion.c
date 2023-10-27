#include <stdio.h>
/**
 * _puts_recursion - prints a String followed by a newline
 * @s: String to be printed out
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%s", s);
		s++;
	}
	printf("\n");
}
