#include <stdio.h>
#include "main.h"
/**
* main - gets the lenght
* @argv: arg vector
* @argc: arg count
* Return: int
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i = i + 1;
}
return (0);
}
