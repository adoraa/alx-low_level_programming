#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a
 * parameter.
 * @str: string
 * Return: returns NULL if str = NULL
 * On success, returns a pointer to the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *output;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	output = (char *)malloc(sizeof(char) * (i + 1));

	while (output != NULL)
	{
		for (; j <= i; j++)
			output[j] = str[j];
		return (output);
	}
	return (NULL);
}
