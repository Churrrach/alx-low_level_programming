#include <stdio.h>
#include "main.h"
/**
* print_rev - gets the lenght
* @str: a pointer parameter
* Return: void
*/
void print_rev(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
len--;
while (len >= 0)
{
_putchar(str[len]);
len--;
}
_putchar('\n');
}
