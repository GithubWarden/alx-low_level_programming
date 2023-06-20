#include "main.h"


/**
 * Entry point - main
 *
 * Description: prints alphabets with declared function
 *
 * Return: void
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	while(lowercase <= 'z');
	{
		_putchar(lowercase);
		lowercase++;
	}

	_putchar('\n');
}
