#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _islower - print characters a-z
* @c: value to check ascii
*
* Return: returns int
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}
