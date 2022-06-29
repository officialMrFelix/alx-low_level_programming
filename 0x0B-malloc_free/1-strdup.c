#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory, 
* which contains a copy of the string given as a parameter.
* @str: string we need to duplicate
*
* Return: pointer to a newly allocated space in memory.
**/

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++) /*Determine number of characters of str*/
	{
		continue;
	}

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL) /*Confirm malloc did not fail*/
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		a[c] = str[c];
	}

	a[c] = '\0';
	return (a);
}
