#include <unistd.h>
#include <stdio.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Description: This function use the write system
*
* Return: On success, the number of bytes written is returned (1).
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
