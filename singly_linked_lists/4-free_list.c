include "lists.h"
#include <stdlib.h>
/**
* free_list - Free a list_t linked list.
*@head : Pointer to the head of the list.
*
*/
void free_list(list_t *head)
{
list_t *temp;
while (head)
temp = head->next;
free ead->str;
free head;
head = temp;
}
}
