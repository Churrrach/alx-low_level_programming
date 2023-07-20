#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - gets string length
* @argc: st dog
* @argv: name of dog
* Return: int val
*/
int main(int argc, char *argv[])
{
int (*op)(int,int);
int a, b, result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
result = op(a,b);
printf("%d\n", result);
return (0);
}
