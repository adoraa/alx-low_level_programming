#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of the arguments
 * @...: infinite number of variables
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nList;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(nList, n);
	while (i < n)
	{
		sum += va_arg(nList, int);
		i++;
	}
	va_end(nList);
	return (sum);
}
