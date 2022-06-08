#include <stdio.h>

/**
* main - main block
* Description: Print all possible different combinations of 3 digits.
* Numbers must be separated by commas and a space.
* The 3 digits must be different.
* 012, 120, 102, 021, 201, 210 are considered the same combination.
* print only the smallest combination of 3 digits.
* Numbers should be printed in ascending order.
* You can only use `putchar` to print to console.
* You can only use `putchar` up to 6 times.
* You are not allowed to use any variables of type `char`.
* Below is the Felix Obianozie way of solving it.
* Return: 0
*/

int main(void)
{
	int a, c, e;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (e > c && c > a)
				{
					putchar(a);
					putchar(c);
					putchar(e);
					if (a == '7' && c == '8' && e == '9')
					{
						putchar('\n');
					} else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
