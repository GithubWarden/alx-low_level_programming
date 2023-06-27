#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints strings in reverse
 *
 * @s: address of strings
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	int z = length - 1;

	while (z >= 0)
	{
		putchar(s[z]);
		z--;
	}

	putchar('\n');
}
