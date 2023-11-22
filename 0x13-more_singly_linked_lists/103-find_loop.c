#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to the head of the list
* Return: the address of the node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast; /* declare two pointers for loop detection */

if (head == NULL) /* check if the list is empty */
return (NULL);

slow = head; /* initialize the slow pointer to the head of the list */
fast = head; /* initialize the fast pointer to the head of the list */

while (slow != NULL && fast != NULL && fast->next != NULL) /* traverse the list */
{
slow = slow->next; /* move the slow pointer one step ahead */
fast = fast->next->next; /* move the fast pointer two steps ahead */
if (slow == fast) /* check if the slow and fast pointers meet */
break; /* break the loop */
}

if (slow != fast) /* check if there is no loop */
return (NULL);

slow = head; /* reset the slow pointer to the head of the list */

while (slow != fast) /* traverse the list until the loop start */
{
slow = slow->next; /* move the slow pointer one step ahead */
fast = fast->next; /* move the fast pointer one step ahead */
}

return (slow); /* return the address of the loop start */
}
