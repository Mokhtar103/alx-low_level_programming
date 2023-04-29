#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: double pointer to the head
 * @n: value of new node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
return (new_node);
}
