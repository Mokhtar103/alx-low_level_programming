#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: double pointer to the head
 * @index: given index
 * Return: 1 if sucess otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *head_copy = *head;
unsigned int i;

if (head_copy == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(head_copy);
return (1);
}
for (i = 0; i < (index - 1); i++)
{
if (head_copy->next == NULL)
{
return (-1);
}
head_copy = head_copy->next;
}
temp = head_copy->next;
head_copy->next = temp->next;
free(temp);
return (1);
}
