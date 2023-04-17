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
printf("Name: %s\n", d->name ? d->name : "(nill)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
}
}
