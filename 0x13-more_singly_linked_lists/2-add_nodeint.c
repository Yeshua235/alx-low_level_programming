#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to a pointer to the head of the list
* @n: the data to be added in the new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new; /* declare a new node */

new = malloc(sizeof(listint_t)); /* allocate memory for the new node */
if (new == NULL) /* check if allocation failed */
return (NULL);

new->n = n; /* assign the data to the new node */
new->next = *head; /* link the new node to the existing list */
*head = new; /* make the new node the new head of the list */

return (new); /* return the address of the new node */
}
