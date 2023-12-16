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

/**
* bubble_sort - Sorts an array of integers in ascending order using the
*               Bubble Sort algorithm.
* @array: The array of integers to be sorted.
* @size: The number of elements in the array.
*
* Description: This function sorts the elements of the array in ascending
*              order using the Bubble Sort algorithm. It compares adjacent
*              elements and swaps them if they are in the wrong order until
*              the entire array is sorted.
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	bool swapped;

	if (size < 2)
		return;

	while (i < size - 1)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			}
		}
		i++;

		/*This checks if everything has been sorted in the current pass */
		if (swapped == false)
			break;
	}
}
