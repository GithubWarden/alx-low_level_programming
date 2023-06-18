#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabets
 *
 * Return: 0 if successful
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');

	return (0);
}

