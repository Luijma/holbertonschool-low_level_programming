#include "dog.h"
char *copystring(char *s1, char *s2);
unsigned int GetSize(char *str);
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
	char *name_copy;
	char *owner_copy;
	unsigned int nameLength;
	unsigned int ownerLength;

	if (!name)
		return (NULL);
	if (!owner)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);

	nameLength = GetSize(name);
	ownerLength = GetSize(owner);

	name_copy = malloc(sizeof(char) * nameLength);

	if (!name_copy)
	{
		free(pup);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * ownerLength);

	if (!owner_copy)
	{
		free(pup);
		free(name_copy);
		return (NULL);
	}

	pup->name = copystring(name, name_copy);
	pup->age = age;
	pup->owner = copystring(owner, owner_copy);

	return (pup);
}
/**
 * copystring - copies s1 unto s2
 * @s1: string to be copied
 * @s2: destination
 * Return: pointer to created string
 */
char *copystring(char *s1, char *s2)
{
	unsigned int i = 0;

	for (i = 0; s1[i]; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	return (s2);
}
/**
 * GetSize - gets size of str
 * @str: string t ocheck
 * Return: size of str including null pointer
 */
unsigned int GetSize(char *str)
{
	int size = 0;

	while (str[size])
	{
		size++;
	}
	size++;
	return (size);
}
