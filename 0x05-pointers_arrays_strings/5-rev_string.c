#include "holberton.h"
/**
 * rev_string - reverses the string given
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char *backCount = s;
	char *forwardCount = s;
	char currentChar;

	while (*(s + length))
	{
		length++;
	}
	backCount = s;
	forwardCount = s;
	for (i = 0; i < (length - 1); i++)
	{
		backCount++;
	}
	for (i = 0; i < (length / 2); i++)
	{
		currentChar = *backCount;
		*backCount = *forwardCount;
		*forwardCount = currentChar;
		backCount--;
		forwardCount++;
	}
}
