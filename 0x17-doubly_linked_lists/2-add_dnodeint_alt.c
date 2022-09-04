/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: pointer to head pointer of dlistint_t list
 * @n: data value for head node
 *
 * Author: Felix Obianozie
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *newNode;

        newNode = malloc(sizeof(dlistint_t));

        if (newNode == NULL)
        {
                return (NULL);  /*Malloc failed!*/
        }

        newNode->n = n;
        newNode->prev = NULL;
        newNode->next = *head;
        *head = newNode;
        return (newNode);
}
