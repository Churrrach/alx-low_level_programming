#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* leng - gets the lenght
* @s: pointer
* @t: char
* Return: no of count
*/
int leng(char *s, char t)
{
int i;
for (i = 0; s[i] != t; i++)
{
}
return (i);
}
/**
* cou - gets the lenght
* @s: pointer
* Return: no of count
*/
int cou(char *s)
{
int l = leng(s, '\0'), j = 0, k = 0;
while(j < l)
{
if ((s[j - 1] == ' ' && s[j + 1] != ' ') || j == 0)
{
k++;
}
j++;
}
return (k);
}
/**
* strtow - gets the lenght
* @str: pointer
* Return: no of count
*/
char **strtow(char *str)
{
int i = 0, l, j, k = 0, m;
char **p;
if (str == NULL || leng(str, '\0') == 0)
return (NULL);
l = cou(str);
p = (char **) malloc( sizeof(char *) * l + 1);
if (p == NULL)
return (NULL);
p[l] = NULL;
for (j = 0; j < leng(str, '\0'); j++)
{
if (str[j] != ' ')
{
if ((str[j-1] == ' ' && str[j +1] != ' ') || j == 0)
{
if (k)
{
i++;

}
k = 0;
m = leng((str + j), ' ');
p[i] = malloc(sizeof(char) * m + 1);
p[i][k] = '\0';
}
p[i][k] = str[j];
k++;
}
}
return p;
}

void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow(" !@#$^&*(())_Talk ><><.., ][{} 76478 is ~~ cheap :) . Show #$45&*(45 me 873589 the |[]{} -_=+ code.^& ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
  
}
