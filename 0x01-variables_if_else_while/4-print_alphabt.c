#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'q' || c == 'e')
continue;
putchar(c);
}
putchar('\n');
return (0);
}
