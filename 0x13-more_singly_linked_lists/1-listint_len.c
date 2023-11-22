#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to the head of the list
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL) /* traverse the list */
{
h = h->next; /* move to the next node */
count++; /* increment the counter */
}

return (count); /* return the number of elements */
}
