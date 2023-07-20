#include <stdlib.h>
#include "3-calc.h"
/**
* int_index - gets string length
* @array: st dog
* @size: name of dog
* @cmp: name o func
* Return: int val
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s && s[1] == '\0')
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
