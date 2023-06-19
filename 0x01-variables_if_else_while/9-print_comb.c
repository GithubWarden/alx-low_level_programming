#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single = 0;

	while (single <= 9)
	{
		putchar('0' + single);
	
		if (single != 9)
		{
			putchar(',');
			putchar(' ');
		}
	
		single++;
	}

	putchar('\n');

	return (0);
}

