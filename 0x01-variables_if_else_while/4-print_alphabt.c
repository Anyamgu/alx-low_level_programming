#include <stdio.h>
/**
 * main - Prints the alphabets
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
	if (y == 'e' || y == 'q')
	{
		y += 1;
	}
	else
	{
		putchar(y);
		y += 1;
	}
	}
	putchar('\n');
	return (0);
}

