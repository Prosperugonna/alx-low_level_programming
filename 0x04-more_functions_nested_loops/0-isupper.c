#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: parameter
 * Return: 0 is success
 */

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
