#include "main.h"
/**
* _strcat - function that concatenates 2 strings
* @dest: Entered value
* @src: Entered value
* Return: Void
*/
char *_strcat(char *dest, char *src)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
