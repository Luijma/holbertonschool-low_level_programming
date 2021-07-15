#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new allocated space in memory, NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int newSize = 0;
	int i = 0;
	int j = 0;

	while (s1 && s1[i])
	{
		newSize++;
		i++;
	}

	while (s2 && s2[j])
	{
		newSize++;
		j++;
	}

	i = 0;
	j = 0;
	newSize++;

	newstr = malloc(sizeof(char) * newSize);

	if (newstr == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}

	newstr[i] = '\0';
	return (newstr);
}
