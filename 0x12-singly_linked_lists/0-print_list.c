#include "lists.h"

/**
 * _strlen - return the length of a string
 * @str: string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
    int i;

    i = 0;
    if(str == NULL)
    {
        return (0);
    }
    while(*str++)
    {
        i++;
    }
    return (i);
}

/**
 * print_list - prints all elements of a list
 * @h: first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t i = 0;

    while(h != NULL)
    {
        printf("[%d] ", _strlen(h->str));
        if(h->str == NULL)
        {
            printf("(nill)\n");
        }
        else
        {
            printf("%s\n", h->str);
        }
        h = h->next;
        i++;
    }
    return (i);
}
