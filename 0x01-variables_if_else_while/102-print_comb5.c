#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print the last digit of the number stored in variable  n'
 * Return: Always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; n <= 98; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (m == 98 && n == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
