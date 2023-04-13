#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concat two strings
 * @s1: first string
 * @s2: second string
 * @n : number of bytes
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int s1_len = 0, s2_len = 0, i, j;
char *str;


if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[s1_len] != '\0')
{
s1_len++;
}
while (s2[s2_len] != '\0')
{
s2_len++;
}
str = malloc(s1_len + n + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
str[i] = s1[i];
}
for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
