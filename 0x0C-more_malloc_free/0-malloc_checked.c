#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @x: amount of memory to allocate (in bytes)
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int x)
{
	/*declare a pointer to be used*/
	int *ptr;

	/*reserve memory spaces in heap*/
	ptr = malloc(x);

	/*if malloc doesn't fails*/
	if (ptr == NULL)
	{
		free(ptr);
		exit(98); /*Terminate process with 98 as return value*/
	}
	return (ptr);
}
