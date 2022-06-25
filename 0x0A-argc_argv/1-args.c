#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: arguments counter.
* @argv: pointer to array of arguments
* Return: Returns 0.
**/

int main(int argc, char *argv[])
{
	(void)argv; /*Surpress unused*/
	printf("%d\n", (argc - 1));
	return (0);
}
