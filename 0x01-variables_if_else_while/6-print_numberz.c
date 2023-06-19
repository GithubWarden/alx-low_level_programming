#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int single;

    single = 0;
    while (single <= 9)
    {
        putchar(single + '0');
        single++;
    }

    putchar('\n');

    return 0;
}

