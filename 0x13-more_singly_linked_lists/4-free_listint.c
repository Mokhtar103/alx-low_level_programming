#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to the head
 * Return: empty
 */
void free_listint(listint_t *head)
{
listint_t *test;

while (head)
{
test = head->next;
free(head);
head = test;
}
}
