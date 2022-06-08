#include <stdio.h>

/**
* main - prints a string "_putchar" string of characters"
*
* Return: 0
*/

int main(void)
{
	int i;
	char myText[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(myText[i]);
	}
	putchar('\n');
	return (0);
}
