#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a listint_t list
* @head: pointer to the head of the list
*/
void free_listint(listint_t *head)
{
listint_t *temp; /* declare a temporary pointer */

while (head != NULL) /* traverse the list */
{
temp = head; /* store the current node in temp */
head = head->next; /* move to the next node */
free(temp); /* free the current node */
}
}
