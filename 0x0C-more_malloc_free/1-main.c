#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
	char *concatEmpty;

    concat = string_nconcat("Holberton", "School-!!!", 6);
	concatEmpty = string_nconcat("potato", NULL, 3);
    printf("%s\n", concat);
	printf("%s\n", concatEmpty);

	free(concatEmpty);
	free(concat);
    return (0);
}
