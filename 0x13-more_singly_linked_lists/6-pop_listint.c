#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to a pointer to the head of the list
* Return: the head node’s data (n), or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp; /* declare a temporary pointer */
int n; /* declare a variable to store the data */

if (head == NULL || *head == NULL) /* check if the list is empty */
return (0);

temp = *head; /* store the head node in temp */
n = temp->n; /* store the data in n */
*head = (*head)->next; /* move the head pointer to the next node */
free(temp); /* free the head node */

return (n); /* return the data */
}
