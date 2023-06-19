#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of four digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int dig1, dig2, dig3, dig4;

    for (dig1 = 0; dig1 <= 9; dig1++)
    {
        for (dig2 = 0; dig2 <= 8; dig2++)
        {
            for (dig3 = 0; dig3 <= 9; dig3++)
            {
                for (dig4 = 1; dig4 <= 9; dig4++)
                {
                    putchar(dig1 + '0');
                    putchar(dig2 + '0');

                    if (dig1 != 9 || dig2 != 8)
                    {
                        putchar(' ');
                    }

                    putchar(dig3 + '0');
                    putchar(dig4 + '0');

                    if (dig1 != 9 || dig2 != 8 || dig3 != 9 || dig4 != 9)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return (0);
}

