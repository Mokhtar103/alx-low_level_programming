#include "lists.h"

/**
 * add_node - add a node to the beginning of the list
 * @head: first node of list
 * @str: string to be added
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
char *my_str;
int len = 0;
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

my_str = strdup(str);
if (my_str == NULL)
{
free(new_node);
return (NULL);
}

while (str[len])
{
len++;
}
new_node->str = my_str;
new_node->len = len;
new_node->next = *head;

*head = new_node;

return (new_node);
}
