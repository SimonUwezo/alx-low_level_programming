#include "main.h"
/**
* _strcmp - Compares string values
* @s1: String value
* @s2: String value
* Return:The comparative value of the strings
*/
int _strcmp(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
a++;
}
return (0);
}
