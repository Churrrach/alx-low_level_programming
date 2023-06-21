#include "main.h"
/**
*print_times_table-writes the character c to subnet
*@n: arg 1
*/
void print_times_table(int n)
{
int a = 0;
if (n > 15 || n < 0)
return;
while (a++ <= n)
{
int b = 0;
while (b <= n)
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
 if (check  < 10)
{
_putchar(' ');
_putchar(check + '0');
_putchar(mod + '0');
}
else
{
_putchar((check / 10) + '0');
_putchar((check % 10) + '0');
_putchar(mod + '0');
}
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
b++;
}
_putchar('\n');
}
}
