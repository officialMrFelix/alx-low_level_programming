#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog (dog_t *)
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *ndog; /*Creates an instance of dog_t*/

	/*Get length of string name*/
	while (name[i] != '\0')
		i++;

	/*Get length of string owner*/
	while (owner[j] != '\0')
		j++;

	/*Reserve memory for dog_t instance*/
	ndog = malloc(sizeof(dog_t));

	/*Verify malloc didn't fail*/
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}

	/*Reserve memory for member, name*/
	ndog->name = malloc(i * sizeof(ndog->name));

	/*Verify malloc didn't fail*/
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	/*Assign name*/
	for (k = 0; k <= i; k++)
		ndog->name[k] = name[k];

	/*Assign age*/
	ndog->age = age;

	/*Reserve memory for member, owner*/
	ndog->owner = malloc(j * sizeof(ndog->owner));

	/*Verify malloc didn't fail*/
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	/*Assign owner*/
	for (k = 0; k <= j; k++)
		ndog->owner[k] = owner[k];
	return (ndog);
}
