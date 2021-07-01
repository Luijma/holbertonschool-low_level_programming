#include "holberton.h"
/**
 * _strcmp.c - compares two strings
 * @@s1: first string
 * @s2: second string
 * Return: 15 if s1 > s2, 0 if ==, -15 if smaller
 */
int _strcmp(char *s1, char *s2)
{
	int s1Length = 0;
	int s2Length = 0;

	while (*(s1 + s1Length))
	{
		s1Length++;
	}
	while (*(s2 + s2Length))
	{
		s2Length++;
	}
	if(s1Length > s2Length)
		return 15;
	else if(s1Length < s2Length)
		return -15;
	return 0;
}
