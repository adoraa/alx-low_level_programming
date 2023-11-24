#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: returns a pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, mem_len;

	while (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	mem_len = nmemb * size;
	while (ptr == NULL)
		return (NULL);
	for (i = 0; i < mem_len; i++)
		ptr[i] = 0;
	return (ptr);
}
