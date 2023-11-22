#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: pointer to the head of the list
* Return: the sum of the data, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0; /* declare a variable to store the sum */

while (head != NULL) /* traverse the list */
{
sum += head->n; /* add the data to the sum */
head = head->next; /* move to the next node */
}

return (sum); /* return the sum */
}
