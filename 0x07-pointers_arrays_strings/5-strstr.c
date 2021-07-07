#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to the beginning of string or Null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack && *haystack != *needle; haystack++)
	{
	}
	if (*haystack == *needle)
		return (haystack);
	return (0);
}
