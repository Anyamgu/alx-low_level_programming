#include <stdio.h>
/**
 * main - Prints the alphabets in  reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s = 'z';

	while (s >= 'a')
	{
		putchar(s);
		s -= 1;
	}
	putchar('\n');
	return (0);
}
