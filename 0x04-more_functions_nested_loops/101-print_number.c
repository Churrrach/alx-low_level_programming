#include "main.h"
#include <limits.h>
/**
* print_numbers - prints numbers 0-9
* @n: number to print
* Return: void
* check - checks number of digits
* @b: no to be checked
* Return: int
*/
int check(int b)
{
int a;
int c = 1;
for (a = b; a >= 10; a /= 10)
{
c *= 10;
}
return (c);
}
void print_number(int n)
{
int start;
int num = n;
if (num <= INT_MIN)
num = num;
else if (num < 0)
{
_putchar('-');
num = -num;
}
for (start = check(num); start >= 10; start /= 10)
{
_putchar(num / start + '0');
num = num % start;
}
_putchar(num + '0');
}
