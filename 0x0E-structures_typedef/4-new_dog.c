#include "dog.h"
/**
 * new_dog - Creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * Return: pointer to created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	pup = malloc(sizeof(dog_t));
	if(pup == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(pup);
		return (NULL);
	}else
		pup->name = name;

	pup->age = age;
	
	if (owner == NULL)
	{
		free(pup);
		return (NULL);
	}else
		pup->owner = owner;

	return (pup);
}
