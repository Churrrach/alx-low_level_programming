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
int b = 48;
int c = 48;
while (a < 56)
{
b = a + 1;
while (b < 57)
{
c = b + 1;
while (c <= 57)
{
putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
break;
putchar(',');
putchar(' ');
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
