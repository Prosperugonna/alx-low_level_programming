#include "main.h"
#include <stdio.h>
/**
 * main - something
 * Return: something
 */
int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;

	for (i = 0; i < 50; ++i)
	{
		printf("%ld", a);
		if (i < 49)
		{
			b += a;
			a = b - a;
			printf(", ");
		}
	}

	putchar('\n');

	return (0);
}
