#include "main.h"


/**
 * Entry point - print_alphabet
 *
 * print_alphabet - print alphabet of letters
 *
 * Description: prints alphabets with declared function
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
