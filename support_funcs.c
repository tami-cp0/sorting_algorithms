#include "sort.h"

/**
* swap - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Description: This function swaps the values of the integers
*              pointed to by 'a' and 'b'.
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
