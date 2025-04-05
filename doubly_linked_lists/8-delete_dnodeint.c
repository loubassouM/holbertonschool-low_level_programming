#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (*head == NULL)  
return (-1);
if (index == 0)
{
*head = temp->next;
if (*head)
(*head)->prev = NULL;
free(temp); 
return (1);
    }

    /* Traverse the list to find the node at the given index */
    while (temp && i < index)
    {
        temp = temp->next;
        i++;
    }

    /* If the node doesn't exist at the given index */
    if (temp == NULL)
        return (-1);

    /* Adjust the previous and next nodes to unlink the current node */
    if (temp->next)
        temp->next->prev = temp->prev;
    if (temp->prev)
        temp->prev->next = temp->next;

    free(temp);  /* Free the node */
    return (1);
}

