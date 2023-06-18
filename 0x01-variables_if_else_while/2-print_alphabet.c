#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabets
 *
 * Return: 0 if successful
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	putchar('\n');

	return (0);
}

