#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char za;

	za = 'z';
	while (za >= 'a')
	{
		putchar(za);
		za = za - 1;
	}
	putchar('\n');
	return (0);
}
