#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, mybool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		mybool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				mybool = 0;
				break;
			}
		}
		if (mybool == 1)
			break;
	}
	return (i);
}
