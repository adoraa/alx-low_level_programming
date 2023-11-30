#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: infinite number of variables
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nList;
	unsigned int i = 0;

	va_start(nList, n);
	while (i < n)
	{
		printf("%d", va_arg(nList, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nList);
}
