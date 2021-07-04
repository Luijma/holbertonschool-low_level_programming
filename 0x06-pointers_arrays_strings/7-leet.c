#include "holberton.h"
/**
 * leet - encodes string into 1337
 * @str - string to be passed
 * Return: pointer to translated string
 */
char *leet(char *str)
{
	int i;
	int j;
	char letter[] = "aAeEoOtTlL";
	char encryption[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letter[j])
				str[i] = encryption[j];
		}
	}
	return (str);
}
