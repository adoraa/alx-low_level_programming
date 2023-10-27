#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring
 * @haystack: String to be scanned
 * @needle: String to be searched within haystack
 * Return: returns a pointer to the beginning of
 * the located substring, or NULL if the substring
 * is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j] != '\0')
		j++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
