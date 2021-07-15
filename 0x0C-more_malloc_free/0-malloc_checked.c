#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	void *array; 
	array = malloc(b);
	
	if(array == NULL)
		exit(98);
	return array;
}
