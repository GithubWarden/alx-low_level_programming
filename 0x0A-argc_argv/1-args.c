#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
