#include "lists.h"

/**
 * sum_listint - return the sum of all data
 * @head: pointer to the head
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
