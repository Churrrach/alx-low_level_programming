#include <stdio.h>
#include "main.h"
/**
* puts2 - gets the lenght
* @str: a pointer parameter
* Return: void
*/
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
