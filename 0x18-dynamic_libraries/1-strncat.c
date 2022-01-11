#include "main.h"
/**
 * _strncat - prints string followed by new line
 * @dest: destination
 * @src: source
 * @n: bytes to print
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new = dest;
	int srcLength = 0;
	int i;
	int j;

	while (*(src + srcLength))
	{
		srcLength++;
	}

	for (i = 0; *(dest + i); i++)
	{
		*(new + i) = *(dest + i);
	}
	for (j = 0; (*(src + j) && (j < n)); j++)
	{
		*(new + i) = *(src + j);
		i++;
	}
	if (srcLength < n)
	{
		*(new + i) = '\0';
	}
	return (new);
}
