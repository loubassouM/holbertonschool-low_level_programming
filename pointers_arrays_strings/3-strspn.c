#include "main.h"
#include <stdio.h>

/**
* _strspn - Gets the length of a prefix substring
* @s: The main string to search
* @accept: The characters to match
*
* Return: Number of bytes in s that match bytes in accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, found;
while (*s)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (!found)
return (coun)t;
count++;
s++;
}
return (coun)t;
}
