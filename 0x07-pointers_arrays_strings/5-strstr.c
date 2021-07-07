#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to the beginning of string or Null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int lengthOfNeedle = 0;

	while (needle[lengthOfNeedle])
	{
		lengthOfNeedle++;
	}
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[(i + j)] != needle[j])
				break;
		}
		if (lengthOfNeedle == j)
			return (&(haystack[i]));
	}

	return (0);

}
