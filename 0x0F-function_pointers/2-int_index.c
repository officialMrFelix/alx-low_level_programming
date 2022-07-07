#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: Index of first matching element,on Succes or return -1 on failure
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
		return (-1);
}
