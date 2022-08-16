#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = k = i; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		swap(&array[i], &array[k]);
		print_array(array, size);
	}
}

/**
  * swap - function to swap two integers
  * Return: void
  * @a: integer 1
  * @b: integer 2
  */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
