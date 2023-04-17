#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints dog's data
 * @d: structure
 * Return: empty
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name)
{
printf("Name: %s\n", d->name);
}
else
{
printf("(nill)\n");
}
printf("Age: %f\n", d->age);
if (d->owner)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("(nill)\n");
}
}
}
