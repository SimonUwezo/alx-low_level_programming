#include "main.h"
/**
* _strncat -function that concatenates 2 strings
* using at most n bytes from src
* @dest: Entered value
* @src: Entered value
* @n: Entered value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int c;
int d;
c = 0;
while (dest[c] != '\0')
{
c++;
}
d = 0;
while (d < n && src[d] != '\0')
{
dest[c] = src[d];
c++;
d++;
}
dest[c] = '\0';
return (dest);
}
