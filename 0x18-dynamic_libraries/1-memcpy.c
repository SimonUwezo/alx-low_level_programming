#include "main.h"
/**
* _memcpy - function that copies memory area
* @dest:memory store
* @src: memory to copy
* @n: no of bytes
* Return: copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int p = 0;
int i = n;
for (; p < i; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
