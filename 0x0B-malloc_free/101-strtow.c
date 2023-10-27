#include <stdlib.h>
/**
 * _wordlen - checks the length of a word
 * @s: the String to be searched
 * Return: a pointer to the last index of s
 */
int _wordlen(char *s)
{
	int i = 0, count = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		count++;
		i++;
	}
	return (count);
}
/**
 *  _wordcount - returns the number of words in a string
 * @s: the String to be checked
 * Return: the number of words in a String
 */
int _wordcount(char *s)
{
	int i, len = 0, words = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(s + i) != ' ')
		{
			i += _wordlen(s + i);
			words++;
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: returns NULL if str = NULL, str = "", or the
 * function fails. Else, returns a pointer to an array of
 * Strings
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, j, k, words, word_len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = _wordcount(str);

	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;
		word_len = _wordlen(str + i);

		s[j] = malloc(sizeof(char) * (word_len + 1));
		if (s[j] == NULL)
		{
			for (; j >= 0; j--)
				free(s[j]);
			free(s);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			s[j][k] = str[i++];
		s[j][k] = '\0';
	}
	s[j] = NULL;
	return (s);
}
