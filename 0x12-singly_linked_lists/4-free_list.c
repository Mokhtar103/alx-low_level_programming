#include "lists.h"

/**
 * free_list - frees list_t
 * @head: first node of list
 *
 * Return: empty
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}

