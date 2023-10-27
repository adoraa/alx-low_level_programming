#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of the array
 * @c: array of chars to be created
 * Return: returns NULL if size is 0, else if successful
 * returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);

	while (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	return (NULL);
}
