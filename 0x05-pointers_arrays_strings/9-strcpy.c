#include "holberton.h"
/**
 * _strcpy - function that copies a string
 * @dest: pointer to be written to
 * @src: pointer to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;
	
	while (*(src + length))
	{
		length++;
	}
	length++;

	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(src +i);
	}

	return dest;
}
