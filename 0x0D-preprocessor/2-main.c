#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints file you compiled from
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
