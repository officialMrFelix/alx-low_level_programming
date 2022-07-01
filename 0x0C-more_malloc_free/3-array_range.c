#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @max: maximum integer value
 * @min: minimum integer value
 * Return: pointer to the newly created array.
 **/

int *array_range(int min, int max)
{
	int i;
	int *a;

	/*Verify that max is bigger than min*/
	if (min > max)
	{
		return (NULL);
	}

	/*Reserve memory space using malloc*/
	a = malloc((max - min + 1) * sizeof(int));

	/*Verify that malloc did not fail*/
	if (a == NULL)
	{
		return (NULL);
	}

	/*Generate array of int from min(included) to max(included)*/
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
