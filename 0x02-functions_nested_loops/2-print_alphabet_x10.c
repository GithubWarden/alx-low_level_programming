#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets of letters ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, letter;

	i = 0;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		i++;
		_putchar('\n');
	}
}
