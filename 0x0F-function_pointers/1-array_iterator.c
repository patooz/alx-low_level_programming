#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of the array
 * @action: pointer to the function
 * @array: array of pointers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}
