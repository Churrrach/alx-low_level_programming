#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - gets string length
* @n: struct dog
* Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list nums;
if (n == 0)
return (0);
va_start(nums, n);
for (i = n; i > 0; i--)
{
sum += va_arg(nums, int);
}
va_end(nums);
return (sum);
}
