#include "main.h"


/**
 * swap_int - swaps values of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
