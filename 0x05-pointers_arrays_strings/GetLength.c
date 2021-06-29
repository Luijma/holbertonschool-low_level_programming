#include "holberton.h"
/**
 * GetLength - Gets length of string
 * @str: string
 */
int GetLength(char *str)
{
	int length = 0;
	while (*(str + length))
	{
		length++;
	}
	return (length);
}
