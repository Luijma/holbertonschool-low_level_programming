#include "main.h"
/**
 * _strcat - Concotenates two strings
 * @dest: string that goes on the left
 * @src: string that goes on the right
 * Return: returns a char pointer
 */
char *_strcat(char *dest, char *src)
{
	char *new = dest;
	int i;
	int j;

	for (i = 0; *(dest + i); i++)
	{
		*(new + i) = *(dest + i);
	}
	for (j = 0; *(src + j); j++)
	{
		*(new + i) = *(src + j);
		i++;
	}
	*(new + i) = '\0';

	return (new);
}
