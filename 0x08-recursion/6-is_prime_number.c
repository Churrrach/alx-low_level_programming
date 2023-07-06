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
if (b % a == 0)
return (0);
else if (a > (b / 2))
return (1);
else
return (check(a + 1, b));
}
/**
* is_prime_number - print prime no
* @n: param to check
* Return: int val
*/
int is_prime_number(int n)
{
int start = 2;
if (n <= 1)
return (0);
else
return (check(start, n));
}
