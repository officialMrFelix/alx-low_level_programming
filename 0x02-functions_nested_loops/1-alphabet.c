#include "main.h"

/**
 * print_alphabet - prints the letters of the alphabet in small case
 *
 * Return: void
*/

void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}

