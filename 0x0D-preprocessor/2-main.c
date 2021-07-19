#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints file you compiled from
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0 on success
 */
int main (__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
