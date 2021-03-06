#include "function_pointers.h"
/**
 * print_name - uses function pointer to print a name
 * @name: string to be printed
 * @f: pointer to function that will print the string
 */
void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
