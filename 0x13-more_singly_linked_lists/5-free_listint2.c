#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: pointer to a pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
listint_t *temp; /* declare a temporary pointer */

if (head == NULL) /* check if the head pointer is NULL */
return;

while (*head != NULL) /* traverse the list */
{
temp = *head; /* store the current node in temp */
*head = (*head)->next; /* move to the next node */
free(temp); /* free the current node */
}

*head = NULL; /* set the head pointer to NULL */
}
