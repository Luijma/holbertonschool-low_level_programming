#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - linked list
 * @str: string
 * @length: str char count
 * @next: pointer to following node
 *
 * Desription: linked list node struct
 */
typedef struct list_s
{
	char *str;
	unsigned int length;
	struct list_s *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* LISTS_H */
