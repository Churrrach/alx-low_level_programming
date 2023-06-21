#include "main.h"
/**
* print_last_digit - writes the character c to stdout
*
*@c: c is an ascii character
*
*c number for paramerter
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int c)
{
int val = c % 10;
if (val < 0)
val = val * -1;
_putchar(val + '0');
return (val);
}
