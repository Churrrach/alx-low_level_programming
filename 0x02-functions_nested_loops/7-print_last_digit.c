#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_last_digit - print characters a-z
* @c: value to check ascii
*
* Return: returns int
*/
int print_last_digit(int c)
{
if (c < 0)
c *= -1;
return (c % 10);
}
