#include "dog.h"

/**
 *my_dog - describes thr dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@ptr: pointer to the struct dog
 */
void my_dog(struct dog *ptr, char *name, float age, char *owner)
{
	if (ptr != 0)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}

}
