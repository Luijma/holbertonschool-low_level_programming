#include "holberton.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 * Return: NULL On failure, otherwise allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int s1Length = 0;
	unsigned int s2Length = 0;
	unsigned int newLength = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1 && s1[s1Length])
	{
		s1Length++;
	}
	while (s2 && s2[s2Length])
	{
		s2Length++;
	}
	if (s2 && n >= s2Length)
		newLength = s2Length + s1Length;
	else
		newLength = s1Length + n;

	newString = malloc(sizeof(char) * newLength + 1);
	if (newString == NULL)
	{
		return (NULL);
	}
	while (s1 && s1[i])
	{
		newString[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] && i < newLength)
	{
		newString[i] = s2[j];
		i++;
		j++;
	}
	newString[i] = '\0';
	newLength -= 2;
	return (newString);
}
