#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	az = 0;
	while (az <= 9)
	{
		putchar(az + '0');
		if (az != 9)
		{
			putchar(',');
			putchar(' ');
		}
		az++;
	}
	putchar('\n');

	return (0);
}
