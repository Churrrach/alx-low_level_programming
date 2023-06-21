#include "main.h"
/**
*_abs - writes the character c to stdout
*
*@c: c is an ascii character
*
*c number for paramerter
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
int _abs(int c)
{
if (c < 0)
return (c * -1);
else
return (c);
}
