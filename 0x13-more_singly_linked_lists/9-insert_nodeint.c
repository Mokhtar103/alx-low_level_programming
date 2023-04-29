#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node
 * @head: double pointer to the head
 * @idx: index
 * @n: data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node,  *temp = *head;
unsigned int i;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;

if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}

for (i = 0; i < (idx - 1); i++)
{
if (temp == NULL || temp->next == NULL)
{
return (NULL);
}
temp = temp->next;
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
