#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The unsigned long int to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int bit_position = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit_position >= 0)
	{
		if ((n >> bit_position) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		bit_position--;
	}
}
