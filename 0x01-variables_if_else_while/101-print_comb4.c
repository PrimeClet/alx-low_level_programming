#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = 0;
	int tens = 0;
	int hundreds = 0;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = 0; ones <= 9; ones++)
			{
				if (!((ones == tens) || (tens > ones) || (tens == hundreds)
							|| (hundreds > tens)))
				{
					putchar(hundreds + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					if (!(ones == 9 && hundreds == 7 &&
							       tens == 8))
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