#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		putchar(v);
		v += 1;
	}
	putchar('\n');
	return (0);
}
