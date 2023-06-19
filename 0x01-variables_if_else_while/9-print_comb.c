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
    int hex = 0;

    while (hex <= 9)
    {
        putchar('0' + hex);

        if (hex != 9)
        {
            putchar(',');
            putchar(' ');
        }

        hex++;
    }

    putchar('\n');

    return 0;
}

