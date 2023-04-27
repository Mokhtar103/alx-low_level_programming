#include "lists.h"

/**
 * add_node_end - add a node to the end of the list
 * @head: first node of list
 * @str: string to be added
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = *head;
int len = 0;
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

while (str[len])
{
len++;
}
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = new_node;
return (new_node);
}
