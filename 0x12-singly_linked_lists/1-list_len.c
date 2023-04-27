#include "lists.h"

/**
 * list_len - return number of elements
 * @h: first node of list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
