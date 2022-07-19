#include "lists.h"

/**
 * listint_len - count the number of elements in a linked listint_t list.
 * @h: headnode
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t i;

	temp = h;
	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (i);
}
