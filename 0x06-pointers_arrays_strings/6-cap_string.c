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
	char seperator[] = " \t,;.!?\"(){}\n";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; seperator[j]; j++)
		{
			if (str[i] == seperator[j])
			{
				if ((str[i] && str[i + 1]) && str[i + 1] <= 'z' && str[i + 1] >= 'a')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
