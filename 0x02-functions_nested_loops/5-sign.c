#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_sign - print characters a-z
* @n: value to check ascii
*
* Return: returns int
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
