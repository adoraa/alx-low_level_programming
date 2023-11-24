#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: returns a char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int len, s1_len, s2_len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (n > s2_len)
		n = s2_len;
	len = s1_len + n;

	output = malloc(len + 1);
	while (output == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		if (i < s1_len)
			output[i] = s1[i];
		else
			output[i] = s2[i - s1_len];
	output[i] = '\0';
	return (output);
}
