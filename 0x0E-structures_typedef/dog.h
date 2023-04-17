#include "dog.h"

/**
 *my_dog - describes thr dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@s: pointer to the struct dog
 */
void my_dog(struct dog *s, char *name, float age, char *owner)
{
	if (s != 0)
	{
		s->name = name;
		s->age = age;
		s->owner = owner;
	}

}
