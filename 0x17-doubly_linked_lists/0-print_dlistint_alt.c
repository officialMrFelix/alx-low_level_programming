#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head pointer to dlistint_t list
 * Author: Felix Obianozie
 * Return: number of elements in dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
        const dlistint_t *current = h;
        int count = 0;

        while (current->prev) /*Traverse to begining of list*/
                current = current -> prev;

        while (current) /*Print all elements*/
        {
                printf("%d\n", current->n);
                count++;
                current = current->next;
        }
        return (count);
}
