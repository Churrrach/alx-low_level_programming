#include "main.h"
#include <stdio.h>
/**
* main - writes the character c to stdout
* Return: 0 On success of the value
*/
int main(void)
{
int count = 0;
double i = 1;
double fibo = 1;
while (count++ < 98)
{
if (count == 98)
{
printf("%.0lf", fibo);
break;
}
printf("%.0lf, ", fibo);
fibo = fibo + i;
i = fibo - i;
}
printf("\n");
return (0);
}
