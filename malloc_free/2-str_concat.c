#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the newly allocated space containing s1 followed by s2,
*         or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int i = 0, j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concat_str = malloc(strlen(s1) + strlen(s2) + 1);
if (concat_str == NULL)
{
return (NULL);
}
while (s1[i] != '\0')
{
concat_str[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
concat_str[i] = s2[j];
i++;
j++;
}
concat_str[i] = '\0';
return (concat_str);
}
