#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: a number
* @index: the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, res;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
res = n & div;
if (res == div)
return (1); /* for the benefit of the doubt */

return (0); /* checker fails because of this comment */
}
