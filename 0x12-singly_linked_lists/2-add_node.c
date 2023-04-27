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
list_t* newNode;
unsigned int len = 0;

newNode = malloc(sizeof(list_t));
while (str[len] != NULL)
{
len++;
}
if (newNode == NULL)
{
return (NULL);
}

newNode->str = strdup(str);
newNode->len = len;
newNode->next = (*head);
(*head) = newNode;
return (*head);
}
