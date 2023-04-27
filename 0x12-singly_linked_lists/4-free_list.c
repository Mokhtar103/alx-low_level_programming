#include "lists.h"

/**
 * free_list - frees list_t
 * @head: first node of list
 *
 * Return: empty
 */
void free_list(list_t *head)
{
list_t *test;

while (head)
{
test = head->next;
free(head->str);
free(head);
head = test;
}
}
