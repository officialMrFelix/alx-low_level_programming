#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list
 * of a dlistint_t list
 * @head: address of head pointer to dlistint_t list
 * @n: data value for head node
 *
 * Author: Felix Obianozie
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *newNode; /*Instantiate a new node*/

        newNode = malloc(sizeof(dlistint_t));   /*Allocate heap memory*/

        if (!newNode) /*Check that malloc succeeded*/
        {
                return (NULL); /*Malloc failed!*/
        }

        newNode->n = n;
        newNode->prev = *head;
        newNode->next = NULL;
        if (*head)
                (*head)->next = newNode;
        *head = newNode;
        return (newNode);
}
