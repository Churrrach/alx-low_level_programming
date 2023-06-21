#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _abs - print characters a-z
* @c: value to check ascii
*
* Return: returns int
*/
int _abs(int c)
{
if (c < 0)
return (c * -1);
return (c);
}
