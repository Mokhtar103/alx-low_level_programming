/**
 * get_nodeint_at_index - return a node at a given index
 * @head: pointer to the head
 * @index: index of node to be returned
 * Return: node at a given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node1 = head;
unsigned int i;

for (i = 0; i < index; i++)
{
if (head == NULL)
{
return (NULL);
}
node1 = head->next;
}
return (node1);
}
