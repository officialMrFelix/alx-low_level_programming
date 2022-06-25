#include <stdio.h>

/**
* main - prints the file/command name
* @argc: arguments counter.
* @argv: pointer to array of arguments
* Return: zero
**/

int main(int argc, char *argv[])
{
	(void)argc; /*Surpress unused*/
	printf("%s\n", argv[0]);
	return (0);
}
