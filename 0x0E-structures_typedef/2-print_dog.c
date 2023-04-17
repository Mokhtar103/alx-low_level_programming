#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints dog's data
 * @d: structure
 * Return: empty
 */
void print_dog(struct dog *d)
{
if (d->name == NULL || d->owner == NULL || d->age == 0)
{
printf("(nil)");
}
if (d != NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}	
}
