#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints hexadecimal characters
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char hex  = '0';
	
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}
	
	hex = 'a';
	
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	
	putchar('\n');
	
	return (0);
}

