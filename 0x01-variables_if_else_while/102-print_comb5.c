#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 48;
int b;
int c;
int d;
while (a <= 57)
{
b = 48;
while (b <= 57)
{
d = b + 1;
c = a;
while (c <= 57)
{
while (d <= 57)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a == 57 && b == 57 && c == 57 && d == 57)
break;
putchar(',');
putchar(' ');
d++;
}
d = 48;
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
