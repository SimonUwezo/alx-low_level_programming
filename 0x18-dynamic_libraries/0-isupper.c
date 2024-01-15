#include "main.h"
/**
* _isupper - checks if letter is uppercase
* @c: - character to check
* Return: 1 if letter is uppercase
* and 0 if otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
return (0);
}
