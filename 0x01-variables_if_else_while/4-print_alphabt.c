#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabets without q and e
 * Return: 0 if successful
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
	}

	putchar('\n');

	return (0);
}

