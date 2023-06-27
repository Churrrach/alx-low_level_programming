#include <stdio.h>
#include "main.h"
/**
* _puts - gets the lenght
* @str: a pointer parameter
* Return: void
*/
void _puts(char *str)
{
int len = 0;
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
