#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function returns the number of elements of a dlistint_t list
 * @h: head pointer to dlistint_t list
 * Author: Felix Obianozie
 * Return: number of elements in dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
        const dlistint_t *current = h;
        int count = 0;

        while (current)
        {
                count++;
                current = current->next;
        }
        return (count);
}
