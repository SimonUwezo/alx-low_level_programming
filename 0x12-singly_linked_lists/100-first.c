#include<stdio.h>
/**
* myStartupFun - function that prints You're beat! and yet
* you must allow,\nI bore my house upon my back!\n
* before the main function is executed.
*
* Return: Nothing
*/
void myStartupFun(void) __attribute__((constructor));
/**
* myStartupFun - implementation of myStartupFun
*/
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
