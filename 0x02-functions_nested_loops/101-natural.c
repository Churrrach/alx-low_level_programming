#include "main.h"
#include <stdio.h>
/**
* main - writes the character c to stdout
* Return: 0 On success of the value
*/
int main(void)
{
int sum = 0, count = 1;
while (count < 1024)
{
if (count % 3 == 0)
sum = sum + count;
else if (count % 5 == 0)
sum = sum + count;
count++;
}
printf("%d", sum);
printf("\n");
return (0);
}
