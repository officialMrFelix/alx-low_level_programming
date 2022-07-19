#include "lists.h"

/**
 * pop_listint - function that deletes the head node.
 * @head: Head node.
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int nodeData;

	if (*head == NULL)
	{
		return (0);
	}

	tempNode = *head;
	*head = tempNode->next;
	nodeData = tempNode->n;

	free(tempNode);
	return (nodeData);
}
