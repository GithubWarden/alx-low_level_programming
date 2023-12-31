#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line to stdout
 *
 * @str: string address
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
