#include <stdio.h>
/**
 * main - Prints the combination of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i += 1;
	}
	putchar('\n');
	return (0);
}

