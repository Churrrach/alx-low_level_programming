#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - allocates memory using malloc
* @argc: int size of memory to be allocated
* @argv: number of arguments
* Return: pointer to allocated memory
*/
int main(int argc, char *argv[])
{
int mul;
if (argc == 3 && atoi(argv[1]) && atoi(argv[2]))
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
printf("Error\n");
exit(98);
return (1);
}
