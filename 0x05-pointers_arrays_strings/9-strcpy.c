#include "main.h"
/**
* *_strcpy - copies of the strings printed by src
* @dest: char type string
* @src: char type string
* Description: copy of the string pointed by string 'src' to
* the buffer pointed to by 'dest'
*/
char *_strcpy(char *dest, char *src)
{
int z = -1;
do {
z++;
dest[z] = src[z];
}
} while (src[z] != '\0');
return (dest);
}
