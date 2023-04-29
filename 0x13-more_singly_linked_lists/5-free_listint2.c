#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to the head
 * Return: empty
 */
void free_listint2(listint_t **head)
{
listint_t* test;

while (*head)
{
test = (*head)->next;
free(*head);
*head = test;
}
head = NULL;
}
