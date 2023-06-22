#include "main.h"
#include <stdio.h>
/**
* main - writes the character c to stdout
* Return: 0 On success of the value
*/
int main(void)
{
int count = 0;
long i = 1;
long fibo = 1;
while (count++ < 98)
{
if (count == 98)
{
printf("%lu", fibo);
break;
}
printf("%lu, ", fibo);
fibo = fibo + i;
i = fibo - i;
}
printf("\n");
return (0);
}
