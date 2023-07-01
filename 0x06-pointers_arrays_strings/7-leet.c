#include <stdio.h>
#include "main.h"
/**
* leet - function that encodes a string into 1337
* @s: string array
* Return: string array
*/
char *leet(char *s)
{
char rev_val[] ={'1','1','7','7','0','0','3','3','4','4'};
char rev_low[]= {'l','L','t','T', 'o','O','e','E','a','A'};
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (j < 9)
{
if(s[i] == rev_low[j])
{
s[i] = rev_val[j];
}
j++;
}
}
return (s);
}
