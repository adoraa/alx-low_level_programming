#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list nList;
	unsigned int i = 0, count = 0;
	char *s;

	va_start(nList, format);
	while (format != NULL && format[i] != '\0')
	{
		if (count)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(nList, int));
				break;
			case 'i':
				printf("%i", va_arg(nList, int));
				break;
			case 'f':
				printf("%f", va_arg(nList, double));
				break;
			case 's':
				s = va_arg(nList, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("nil");
				break;
			default:
				count = 0;
				i++;
				continue;
		}
		count = 1;
		i++;
	}
	printf("\n");
	va_end(nList);
}
