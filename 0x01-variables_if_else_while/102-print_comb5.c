#include <stdio.h>
/**
 * main - Prints the combinations of two two - numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = 0;
	int g;

	while (f <= 99)
	{
		g = f;
		while (g <= 99)
		{
			if (g != f)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((g / 10) + 48);
				putchar((g % 10) + 48);
				if (f != 98 || g != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			g++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}

