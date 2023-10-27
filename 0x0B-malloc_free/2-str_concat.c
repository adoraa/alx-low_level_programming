#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Description: if NULL is passed, treat it as an empty
 * string
 *
 * Return: returns a pointer to the newly allocated space
 * in memory which contains the concatenated strings s1 & s2
 * return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *output;
	int i = 0, j = 0, k = 0, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	output = malloc(sizeof(char) * (i + j + 1));

	while (output == NULL)
		return (NULL);
	length = j;

	for (; k < i; k++)
		output[k] = s1[k];
	for (j = 0; j <= length; k++, j++)
		output[k] = s2[j];
	return (output);
}
