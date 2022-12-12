#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0', m = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (m < 'g')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
