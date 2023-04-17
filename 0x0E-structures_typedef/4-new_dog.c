#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name:name of the dog
 * @age: age of the dog
 * @owner: owner of thr dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
		;
	for (k = 0; owner[k]; k++)
		;
	dog->name = malloc(j + 1);
	dog->owner = malloc(k + 1);
	if (!(dog->name) || !(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; i < k; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
