#include "main.h"
/**
 * _strcpy - function that copies a string
 * @dest: pointer to be written to
 * @src: pointer to be copied
 * Return: Returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (*(src + length))
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + length) = '\0';

	return (dest);
}
