#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index of a listint_t linked list
* @head: pointer to a pointer to the head of the list
* @index: the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp; /* declare a temporary pointer */
listint_t *prev; /* declare a pointer to the previous node */
unsigned int i = 0; /* declare a counter variable */

if (head == NULL || *head == NULL) /* check if the list is empty */
return (-1);

temp = *head; /* initialize the temp pointer to the head of the list */

if (index == 0) /* check if the index is 0 */
{
*head = (*head)->next; /* move the head pointer to the next node */
free(temp); /* free the head node */
return (1); /* return 1 if it succeeded */
}

while (temp != NULL) /* traverse the list until the node to be deleted */
{
if (i == index) /* check if the index matches the counter */
{
prev->next = temp->next; /* link the previous node to the next node */
free(temp); /* free the node to be deleted */
return (1); /* return 1 if it succeeded */
}
prev = temp; /* store the current node in prev */
temp = temp->next; /* move to the next node */
i++; /* increment the counter */
}

return (-1); /* return -1 if it failed */
}
