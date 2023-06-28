#include <stdio.h>
#include "main.h"
/**
* puts_half - gets the lenght
* @str: a pointer parameter
* Return: void
*/
void puts_half(char *str)
{
int i, j, max;
i = 0;
while (str[i] != '\0')
{
i++;
}
max = i;
j = max / 2;
if (max % 2 != 0)
j = ((max-1) / 2) + 1;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
