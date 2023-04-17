#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog -  information about the dog
 * @name: dog's name
 * @age: dog's age
 * @owner : dog's owner
 *
 * Description: contains dog's related information
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
