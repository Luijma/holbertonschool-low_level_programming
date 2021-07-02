#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be checked and edited
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char seperator[] = " \t,;.!?\"(){}"

	for (i = 0; str[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[i] == seperator[j])
				str[i] -= 32;
		}
	}
	return (str);
}
