#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* times_table - print characters a-z
*/
void times_table(void)
{
int a = 0;
while (a++ < 10)
{
int b = 0;
while (b++ < 10)
{
if (b != 9)
{
_putchar(b + '0');
_putchar(',');
_putchar(' ');
}
_putchar(b + '0');
}
_putchar('\n');
}
}
