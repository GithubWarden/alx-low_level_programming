#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1 = 0;
	int digit2 = 1;

	while (digit1 <= 8)
	{
		putchar('0' + digit1);
		putchar('0' + digit2);

		if (digit1 != 8 || digit2 != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit2++;
		if (digit2 > 9)
		{
			digit1++;
			digit2 = digit1 + 1;
		}
	}

	putchar('\n');

	return (0);
}

