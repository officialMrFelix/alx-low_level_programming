#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: array of arguments (pointers)
 *
 * Return: 0 on Success, 98 upon failure
 * Author: Felix Obianozie
 */
int main(int argc, char **argv)
{
	int i, j, k, l, ndex, len_1, len_2, total_len;
	char *num1, *num2, *mul, *sum;

	ndex = 0;
	k = 0;

	/*Check that only two arguments are passed to program*/
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/*Get length of each argument passed*/
	len_1 = str_len(argv[1]);
	len_2 = str_len(argv[2]);
	total_len = len_1 + len_2;

	/*Reserve memory space using malloc*/
	num1 = malloc(sizeof(char) * len_1);
	num2 = malloc(sizeof(char) * len_2);
	if (len_1 >= len_2)
		mul = malloc(sizeof(char) * (len_1 + 1));
	else
		mul = malloc(sizeof(char) * (len_2 + 1));
	sum = malloc(sizeof(char) * total_len);

	/*Verify that malloc did not fail*/
	if (num1 == NULL || num2 == NULL || mul == NULL || sum == NULL)
	{
		printf("Malloc failed!\n");
		free(num1);
        	free(num2);
        	free(mul);
        	free(sum);
		exit(98);
	}

	/*Convert arguments to array of digits*/
	my_atoi(argv[1], len_1, num1);
	my_atoi(argv[2], len_2, num2);

	/*Fill sum with 0*/
	for (k = 0; k <= total_len; k++)
		sum[k] = 0;

	/*Perform multiplication*/
	for (i = 1; i <= len_2; i++)
	{
		for (j = 1; j <= len_1; j++)
		{
			mul[j - 1] = mul[j - 1] + (num2[len_2 - i] * num1[len_1 - j]);
			if (mul[j - 1] > 9)
			{
				mul[j] = mul[j - 1] / 10;
				mul[j - 1] = mul[j - 1] % 10;
			}
		}

		/*Perform addition*/
		for (k = ndex, l = 0; k < len_1 + ndex + 1; k++, l++)
		{
			sum[k] = sum[k] + mul[l];
			if (sum[k] > 9)
			{
				sum[k + 1] = sum[k + 1] + (sum[k] / 10);
				sum[k] = sum[k] % 10;
			}

			/*Initialize the memory space for future data*/
			mul[l] = 0;
		}
		ndex++;
	}

	/*Print result from end to front of sum*/
	i = total_len;

	while (sum[i] == 0)
		i--;
	while (i >= 0)
	{
		putchar(sum[i] + '0');
		i--;
	}
	putchar('\n');

	/*Release all reserved memory space*/
	free(num1);
	free(num2);
	free(mul);
	free(sum);

	return (0);
}

/**
 * str_len - calculates length of string
 * @str: pointer to string
 *
 * Return: length of string
 */
int str_len(char *str)
{
	int len;

	for (len = 0; *str != '\0'; len++)
		str++;
	return (len);
}

/**
 * my_atoi - converts a string to an integer
 * @s: string to be converted
 * @s_len: length of s
 * @buffer: pointer to storage buffer for expected array of integers
 *
 * Return: void
 */
void my_atoi(char *s, int s_len, char *buffer)
{
	int i, digit;

	i = 0;
	digit = 0;
	*buffer = 0;

	while (i < s_len)
	{
		/*All characters of string must be digits, else exit*/
		if (s[i] < '0' || s[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}

		/*Convert character to actual digit (int)*/
		digit = s[i] - '0';

		/*Append to array*/
		buffer[i] = digit;
		i++;
	}

	buffer[s_len] = '\0';
}

