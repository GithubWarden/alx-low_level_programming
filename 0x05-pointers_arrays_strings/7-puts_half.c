#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, starting from the mid point
 *
 * @str: string address
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;

	while (str != '\0')
	{
		length_of_the_string++;
	}

	int n;

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}

	int z = n;

	while (z < length_of_the_string)
	{
		putchar(str[z]);
		z++;
	}

	putchar('\n');

}
