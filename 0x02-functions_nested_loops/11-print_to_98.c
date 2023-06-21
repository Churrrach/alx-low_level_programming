#include "main.h"
#include <stdio.h>
/**
* print_to_98 - check the code.
*@n: first ni
* Return: total sum.
*/
void print_to_98(int n)
{
int end = 98;
if (n >= end)
{
while (n >= end)
{
printf("%d", n);
if (n == end)
break;
n--;
printf(",");
printf(" ");
}
}
else
{
while (n <= end)
{
printf("%d", n);
if (n == end)
break;
printf(",");
printf(" ");
n++;
}
}
printf("\n");
}
