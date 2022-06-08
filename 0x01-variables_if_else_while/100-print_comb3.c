#include <stdio.h>

/**
* main - main block
* Description: Print all possible combinations of two digits.
* Numbers must be separated by commas and a space.
* 01 and 10 are considered as the same combination of the two digits.
* Print only the smallest combination of two digits.
* Numbers should be printed in ascending order, with two digits.
* You can only use `putchar`.
* You can only use `putchar` up to 5 times.
* You are not allowed to use any variable of type `char`.
* Return: 0
*/

int main(void)
{
	int a, c;
	int b = '0';
	int d = '0';

	for (a = 0; a <= 9; a++)
	{
		d = '0';
		for (c = 0; c <= 9; c++)
		{
			if (b < d)
			{
				putchar(b);
				putchar(d);
				if (b == '8' && d == '9')
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		b++;
	}
	return (0);
}
