#include "main.h"
/**
 * leet - encodes a string to numbers
 * @c: The string to be encoded
 * Return: encoded numbers
 */
char *leet(char *c)
{
char *cp = c;
char key[] = { 'A', 'E', 'O', 'T', 'L' };
int value[] = {4, 3, 0, 7, 1};
int i;

while (*c)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*c == key[i] || *c == key[i] + 32)
{
*c = 48 + value[i];
}
}
c++;
}
return (cp);
}
