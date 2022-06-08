#include <stdio.h>
void my_Print(int a, int b, int c, int d);

/**
* main - main block
* Description: Print all possible combinations of two two-digit numbers.
* Numbers should range from 0 to 99.
* The two numbers should be separated by a space.
* All numbers should be printed with two digits. 1 should be printed as 01.
* Combination of numbers must be separated by a comma followed by a space.
* Combinations of numbers should be printed in ascending order.
* `00 01` and `01 00` are considered as the same combination.
* You can only use `putchar` to print to console.
* You can only use `putchar` up to 8 times.
* You are not allowed to use any variable of type `char`.
* Here we did it the Felix Obianozie way
* Return: 0
*/

int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					my_Print(a, b, c, d);
				}
			}
		}
	}
	return (0);
}

/**
* my_Print - does the printing based on certain conditions
*@a: first digit
*@b: second digit
*@c: third digit
*@d: fourth digit
*
* Return: void
*/

void my_Print(int a, int b, int c, int d)
{
	if (a < c || (a == c && b < d))
	{
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
		if (a == '9' && b == '8' && c == '9' && d == '9')
		{
			putchar('\n');
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
}

