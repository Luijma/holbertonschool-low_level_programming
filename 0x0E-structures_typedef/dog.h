#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog type
 * @name: the doggo's name
 * @age: the doggo's time spent on this earth
 * @owner: the doggo's god
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/* function prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG */
