#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to the head of the list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0; /* declare a variable to store the node count */
const listint_t *slow, *fast; /* declare two pointers for loop detection */

if (head == NULL) /* check if the list is empty */
exit(98);

slow = head; /* initialize the slow pointer to the head of the list */
fast = head; /* initialize the fast pointer to the head of the list */

while (slow != NULL && fast != NULL && fast->next != NULL) /* traverse the list */
{
printf("[%p] %d\n", (void *)slow, slow->n); /* print the node address and data */
count++; /* increment the node count */
slow = slow->next; /* move the slow pointer one step ahead */
fast = fast->next->next; /* move the fast pointer two steps ahead */
if (slow == fast) /* check if the slow and fast pointers meet */
{
printf("-> [%p] %d\n", (void *)slow, slow->n); /* print the loop node address and data */
return (count); /* return the node count */
}
}

return (count); /* return the node count */
}
