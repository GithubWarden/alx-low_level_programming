#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
