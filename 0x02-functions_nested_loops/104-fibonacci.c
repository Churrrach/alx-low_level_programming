#include "main.h"
#include <stdio.h>
/**
* main - writes the character c to stdout
* Return: 0 On success of the value
*/
int main(void)
{
int sum = 0;
long i = 1;
long fibo = 1;
while (fibo <= 4000000)
{
if (fibo % 2 == 0)
sum += fibo;
fibo = fibo + i;
i = fibo - i;
}
printf("%d", sum);
printf("\n");
return (0);
}
