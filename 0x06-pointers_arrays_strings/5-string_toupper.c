#include "holberton.h"
/**
 * string_toupper - string that changes case of char
 * @str: string to be edited
 * Return: pointer to edited string
 */
char *string_toupper(char * str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] -= 32;
	}
	return str;
}
