#include "holberton.h"
/**
 * main - prints additions
 * @argc: number of arguments
 * @argv: values passed
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i;
	int letter;
	int result = 0;
	int error = 0;

	for (i = 1; i < argc; i++)
	{
		for(letter = 0; (argv[i])[letter]; letter++)
		{
			if((argv[i])[letter] < '0' || (argv[i])[letter] > '9')
			{
				error = 1;
				break;
			}
		}
		if(error)
			break;
	}
	if(error)
	{
		printf("Error\n");
	} else if (argc == 1)
	{
		printf ("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
