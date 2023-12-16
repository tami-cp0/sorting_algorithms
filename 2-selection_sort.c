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
 * selection_sort - Sorts an array in ascending
 * order using the selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;

	for (i = 0; i < size - 1; i++)
	{
		/* Assume the current index is the minimum */
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				/* Update the index of the minimum element */
				idx = j;
				continue;
			}
		}

		if (idx != i)
		{
			/* Swap the current element with the minimum element */
			swap(&array[i], &array[idx]);
			print_array(array, size);
		}
	}
}
