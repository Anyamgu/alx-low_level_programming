#include <stdio.h>
/**
 * main - Prints hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char t;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
