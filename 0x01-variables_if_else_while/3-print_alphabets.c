#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j = 'a';
	char k = 'A';

	while (j <= 'z')
	{
		putchar(j);
		j += 1;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k += 1;
	}
	putchar('\n');
	return (0);
}
