#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints multiples of 3, 5 and 15 as Fizz, Buzz and FizzBuzz
 *
 * Return: 0 if successful
 */

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf("Fizz ");
}
else if (n % 5 == 0 && n % 3 != 0)
{
printf("Buzz ");
}
else if (n % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", n);
}
}

printf("\n");

return (0);
}
