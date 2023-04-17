#include <stdlib.h>
#include "dog.h"
/**
 * _strlen -  gets the length of a string
 * @str: string
 * Return: integer
 */
int _strlen(const char *str)
{
int length = 0;

while (*str++)
{
length++;
}
return (length);
}
/**
 * _strcpy - copy a string
 * @dest: destantion of a copied string
 * @src: string to be copied
 * Return: char 
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog -  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner : owner of dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
{
return (NULL);
}
my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}
my_dog->name = _strcpy(my_dog->name, name);
my_dog->age = age;
my_dog->owner = _strcpy(my_dog->owner, owner);

return (my_dog);
}
