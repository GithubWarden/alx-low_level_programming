#include "main.h"

/**
 * puts_half - prints half of a string, odd or even.
 *
 * @str: string
 *
 * Return: half of the string
 */

void puts_half(char *str);
{
	int z, n, length_of_the_string;

	for (z = 0; str[z] != '\0'; z++;)
	{
		length_of_the_string;
	}

	n = (length_of_the_string / 2);

	if (length_of_the_string % 2 == 1)
	{
		n = ((length_of_the_string - 1) / 2);
	}

	for (z = n; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}
}
