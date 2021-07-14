#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to space in memory with copy of string
 * @str: string to be copied
 * Return: Null if str is Null, or pointer to str
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[size])
	{
		size++;
	}

	size++;
	newstr = malloc(sizeof(char) * size);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
