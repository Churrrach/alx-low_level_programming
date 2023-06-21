#include "main.h"
#include <stdio.h>
/**
* main - writes the character c to stdout
* Return: 0 On success of the value
*/
int main(void)
{
int a;
long i = 1;
long fibo = 1;
for (a = 1; a <= 50; a++)
{
if (a == 50)
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
