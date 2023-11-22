#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node ofa listint_t linked list
* @head: pointer to the head of the list
* @index: the index of the node, starting at 0
* Return: the nth node, or NULL if it does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0; /* declare a counter variable */

while (head != NULL) /* traverse the list */
{
if (i == index) /* check if the index matches the counter */
return (head); /* return the current node */
head = head->next; /* move to the next node */
i++; /* increment the counter */
}

return (NULL); /* return NULL if the node does not exist */
}
