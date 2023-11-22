#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to a pointer to the head of the list
* @n: the data to be added in the new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new; /* declare a new node */
listint_t *last; /* declare a pointer to the last node */

new = malloc(sizeof(listint_t)); /* allocate memory for the new node */
if (new == NULL) /* check if allocation failed */
return (NULL);

new->n = n; /* assign the data to the new node */
new->next = NULL; /* make the new node the last node */

if (*head == NULL) /* check if the list is empty */
{
*head = new; /* make the new node the head of the list */
return (new); /* return the address of the new node */
}

last = *head; /* initialize the last pointer to the head of the list */
while (last->next != NULL) /* traverse the list until the last node */
{
last = last->next; /* move to the next node */
}

last->next = new; /* link the new node to the end of the list */

return (new); /* return the address of the new node */
}
