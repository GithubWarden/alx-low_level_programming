#include "main.h"


/**
 * print_alphabet - print alphabet of letters
 *
 * Return: void
 */

void print_alphabet(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}

	_putchar('\n');
}
