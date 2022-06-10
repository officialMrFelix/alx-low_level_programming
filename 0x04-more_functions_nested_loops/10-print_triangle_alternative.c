#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)	/*Print only new line when size is zero or less*/
	{
		_putchar('\n');
	} else	/*Proceed to draw triangle if size is greater than zero*/
	{
		int hash;	/*@hash: number of hash characters to print*/
		int space;	/*@space: number of space characters to print*/
		int i;		/*@i: for-loop iterator*/
		int j;		/*@j: for-loop iterator*/

		for (i = 1; i <= size; i++)	/*Loop @size number of times*/
		{
			space = size - i;
			hash = size - space;

			for (j = 1; j <= space; j++)	/*Print space character @space numb of times*/
			{
				_putchar(' ');
			}

			for (j = 1; j <= hash; j++)	/*Print hash character @hash numb of times*/
			{
				_putchar('#');
			}

			_putchar('\n');	/*Print new line*/
		}
	}
}
