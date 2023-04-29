#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: double pointer to the head
 * Return: head's data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
{
return (0);
}
else
{
temp = (*head);
data = (*head)->n;
*head = (*head)->next;
free(temp);
}
temp = NULL;
return (data);
}
