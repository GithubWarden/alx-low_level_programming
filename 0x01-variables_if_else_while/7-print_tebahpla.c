#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	
	lowercase = 'z';
	
	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	
	putchar('\n');
	
	return (0);
}

