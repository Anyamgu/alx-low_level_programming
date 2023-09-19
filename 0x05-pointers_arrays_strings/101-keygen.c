#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for 101-crackme
 *
 * Return: void
 */

int main(void)
{
	int sum;
	char v;

	srand(time(NULL));
	while (sum <= 2645)
	{
		v = rand() % 128;
		sum += v;
		putchar(v);
	}
	putchar(2772 - sum);
	return (0);
}
