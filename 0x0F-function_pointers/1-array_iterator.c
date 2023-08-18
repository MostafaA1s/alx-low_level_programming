#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * pramater to all array elements
 * @array: input integer array.
 * @size: size of array.
 * @action: pointer to the function.
 * Return: null
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
