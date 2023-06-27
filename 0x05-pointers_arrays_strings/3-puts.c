#include "main.h"

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
		puts(*str);
		str++;
	}
}
