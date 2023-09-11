#include <stdio.h>
/**
 * main - Prints the single numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num += 1;
	}
	putchar('\n');
	return (0);
}
