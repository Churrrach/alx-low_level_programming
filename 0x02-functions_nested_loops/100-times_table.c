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
while (b++ <= n)
{
int res = a * b;
if (b == 0)
{
_putchar('0');
}
else if (res < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res > 10 && res < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(((res / 10) / 10) + '0');
_putchar(((res / 10) % 10) + '0');
_putchar((res % 10) + '0');
}
}
_putchar('\n');
}
}
