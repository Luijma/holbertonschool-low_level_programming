#include"holberton.h"
/**
 * _islower - function that checks for letter case
 */
int _islower(int c)
{
	if(c < 123 && c > 96 )
	{
		return (1);
	}else
	{
		return (0);
	}
}
