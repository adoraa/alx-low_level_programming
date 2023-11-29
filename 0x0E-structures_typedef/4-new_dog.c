#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns struct dog on success.
 * else returns NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, name_len, owner_len;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}
	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	ptr->name = malloc(name_len + 1);
	ptr->owner = malloc(owner_len + 1);

	if ((ptr->name) == NULL || (ptr->owner) == NULL)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	ptr->age = age;
	for (i = 0; i < owner_len; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
