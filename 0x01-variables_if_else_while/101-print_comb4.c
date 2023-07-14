#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all combinations of 3 digits'
 * Return: Alawys 0
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m < 8; m++)
	{
	for (n = m + 1; n < 9; n++)
	{
		for (o = n + 1; o < 10; o++)
		{
			putchar((m % 10) + '0');
			putchar((n % 10) + '0');
			putchar((o % 10) + '0');

			if (m == 7 && n == 8 && o == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
