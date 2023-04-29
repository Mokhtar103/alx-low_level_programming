#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: pointer to the head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
