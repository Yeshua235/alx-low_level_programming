#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to a pointer to the head of the list
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL; /* declare a pointer to the previous node */
listint_t *next; /* declare a pointer to the next node */

if (head == NULL || *head == NULL) /* check if the list is empty */
return (NULL);

while (*head != NULL) /* traverse the list */
{
next = (*head)->next; /* store the next node in next */
(*head)->next = prev; /* link the current node to the previous node */
prev = *head; /* store the current node in prev */
*head = next; /* move to the next node */
}

*head = prev; /* make the last node the new head of the list */

return (*head); /* return the pointer to the new head */
}
