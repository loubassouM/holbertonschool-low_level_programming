#include "main.h"
#include <stdio.h>

/**
* _strstr - Locates a substring
* @haystack: The main string
* @needle: The substring to find
* Return: Pointer to the beginning of located substring, or NULL
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
