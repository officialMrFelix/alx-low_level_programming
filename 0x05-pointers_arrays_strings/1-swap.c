/**
 * swap_int - does swapping of memory contents
 * @a: parameter
 * @b: parameter
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
