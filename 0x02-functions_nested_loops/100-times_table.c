#include "main.h"
/**
*times_table-writes the character c to subnet
*
*/
void times_table(void)
{
int a = 0;
int b = 0;
while (a <= 9)
{
b = 0;
while (b <= 9)
{
int res = a * b;
int check = res / 10;
if (b == 0)
{
_putchar('0');
}
else if (check >= 1)
{
int mod = res % 10;
_putchar(',');
_putchar(' ');
_putchar(check + '0');
_putchar(mod + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
b++;
}
_putchar('\n');
a++;
}
}
