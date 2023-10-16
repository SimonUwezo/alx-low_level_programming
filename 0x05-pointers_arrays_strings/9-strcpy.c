#include "main.h"
/**
* _strcpy - Copy a string from source to destination.
* @dest: The destination buffer.
* @src: The source string.
*
* Description: This function copies the string pointed to by 'src' to
* the buffer pointed to by 'dest'.
*
* Return: A pointer to the destination buffer 'dest'.
*/
char *_strcpy(char *dest, char *src)
{
int z = -1;
do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');
return (dest);
}
