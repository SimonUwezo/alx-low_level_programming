#include "main.h"
/**
* _strcmp - function that compares 2 strings
* @s1: pointer to first string 
* @s2: pointer to second string
* @n: number of bytes to be used
* Return: value less than 0 upon comparing
*/
int _strcmp(char *s1, char *s2)
{
int counter, compare_value;
counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}
compare_value = s1[counter] - s2[counter];
return (compare_value);
}
