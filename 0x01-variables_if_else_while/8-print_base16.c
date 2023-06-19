#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 and lowercase hexadecimal characters from 'a' to 'f'
 *              in ascending order, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
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

    putchar('\n'); // Add a new line after printing the numbers

    return 0;
}

