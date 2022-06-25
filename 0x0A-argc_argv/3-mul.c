#include <stdio.h>
#include <stdlib.h>

/**
 * main - product of 2 numbers
 * @argc: arguments counter.
 * @argv: pointer to array of arguments
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int a, b, c, product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (a = 0; a < argc; a++)
	{
		b = atoi(argv[1]); /*Converts second argv to integer*/
		c = atoi(argv[2]); /*Converts third argv to integer*/
	}

	product = b * c;
	printf("%d\n", product);
	return (0);
}
