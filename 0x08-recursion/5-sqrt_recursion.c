#include <stdio.h>
#include "main.h"
/**
* check - get the workdone
* @a: a inner function
* @b: a inner func param
* Return: int
*/
int check(int a, int b)
{
if (b / a == a && b % a == 0)
return (a);
else if (a > (b / 2))
return (-1);
else
return (check(a + 1, b));
}
/**
* _sqrt_recursion - gets the lenght
* @n: number to check
* Return: int val
*/
int _sqrt_recursion(int n)
{
int start = 1;
int cop = n;
if (n <= 0)
return (-1);
else
return (check(start, cop));
}
