#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - finds length of a given string.
* @s: pointer to string of char type
*
* Return: length of given string.
*/

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
* str_concat - Concatenates 2 strings.
* @s1: First string.
* @s2: Second string.
*
* Return: Returns the created array.
**/

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, tlen;
	char *ar;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	tlen = (len1 + len2)+1;
	ar = malloc(tlen * sizeof(char));
	if (ar == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < len1; i++)
			ar[i] = s1[i];
		for (j = 0; j < len2; j++)
		{
			ar[i] = s2[j];
			i++;
		}
		ar[i + 1] = '\0';
		return (ar);
	}
}
