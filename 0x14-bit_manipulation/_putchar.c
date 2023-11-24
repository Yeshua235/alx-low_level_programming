#include <unistd.h>
#include <stdio.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Description: This function uses the write system call to
* output a single character to the standard output.
* Return: On success, the number of bytes written is returned (1).
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
