#include <stdlib.h>
/**
 * argstostr - Concatenates all arguments of the program into
 * a string. Arguments are separated by a new line in the
 * string.
 * @ac: argument count.
 * @av: An array of pointers to the arguments.
 * Return: returns NULL if ac == 0, av == NULL, or the
 * function fails. Else, a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, count = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[count++] = av[i][j];
		str[count++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
