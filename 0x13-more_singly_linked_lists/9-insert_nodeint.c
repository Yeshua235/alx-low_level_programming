#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to a pointer to the head of the list
* @idx: the index of the list where the new node should be added
* @n: the data to be added in the new node
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new; /* declare a new node */
listint_t *prev; /* declare a pointer to the previous node */
unsigned int i = 0; /* declare a counter variable */

if (head == NULL) /* check if the head pointer is NULL */
return (NULL);

new = malloc(sizeof(listint_t)); /* allocate memory for the new node */
if (new == NULL) /* check if allocation failed */
return (NULL);

new->n = n; /* assign the data to the new node */

if (idx == 0) /* check if the index is 0 */
{
new->next = *head; /* link the new node to the existing list */
*head = new; /* make the new node the new head of the list */
return (new); /* return the address of the new node */
}

prev = *head; /* initialize the prev pointer to the head of the list */
while (prev != NULL) /* traverse the list until the previous node */
{
if (i == idx - 1) /* check if the index matches the counter */
{
new->next = prev->next; /* link the new node to the next node */
prev->next = new; /* link the previous node to the new node */
return (new); /* return the address of the new node */
}
prev = prev->next; /* move to the next node */
i++; /* increment the counter */
}

free(new); /* free the new node if it was not inserted */
return (NULL); /* return NULL if it was not possible to add the new node */
}
