#include "holberton.h"
/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: values passed
 * Return: 0 on success, 1 on failure
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	_putchar((argc - 1) + '0');
	_putchar('\n');
	return (0);
}
