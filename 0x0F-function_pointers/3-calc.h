#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mult(int a, int b);


#endif /* CALC_H */
