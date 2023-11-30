#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: infinite number of variables
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nList;
	unsigned int i = 0;
	char *s;

	va_start(nList, n);
	while (i < n)
	{
		s = va_arg(nList, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nList);
}
