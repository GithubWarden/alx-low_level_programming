#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints time
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}
