#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - frees a listint_t list
* @h: pointer to a pointer to the head of the list
* Return: the size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0; /* declare a variable to store the node count */
listint_t *temp; /* declare a temporary pointer */
listint_t *slow, *fast; /* declare two pointers for loop detection */

if (h == NULL || *h == NULL) /* check if the list is empty */
return (0);

slow = *h; /* initialize the slow pointer to the head of the list */
fast = *h; /* initialize the fast pointer to the head of the list */

while (slow != NULL && fast != NULL && fast->next != NULL) /* traverse the list */
{
temp = slow; /* store the current node in temp */
slow = slow->next; /* move the slow pointer one step ahead */
fast = fast->next->next; /* move the fast pointer two steps ahead */
free(temp); /* free the current node */
count++; /* increment the node count */
if (slow == fast) /* check if the slow and fast pointers meet */
{
free(slow); /* free the loop node */
count++; /* increment the node count */
*h = NULL; /* set the head pointer to NULL */
return (count); /* return the node count */
}
}

while (slow != NULL) /* traverse the remaining list */
{
temp = slow; /* store the current node in temp */
slow = slow->next; /* move to the next node */
free(temp); /* free the current node */
count++; /* increment the node count */
}

*h = NULL; /* set the head pointer to NULL */
return (count); /* return the node count */
}
