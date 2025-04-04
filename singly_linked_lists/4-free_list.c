#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *next = head->next;
free(head->str);
free(head);
head = next;
}
}
