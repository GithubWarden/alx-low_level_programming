#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 *
 * @str: string address
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != 0)
	{
		length++;
	}

	i = 0;

	while (i < length / 2)
	{
		char z = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = z;
	}
}
