#include<stdio.h>
/**
 * main - function that prints Holberton
 * Return: 0
 */
int main(void)
{
	char holberton[10] = "Holberton";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(holberton[i]);
	}
	putchar('\n');
	return (0);
}
