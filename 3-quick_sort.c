#include "sort.h"

/**
   * quick_sort - Sorts an array of integers in ascending order using the Q\
   uick
   * sort algorithm
   * @array: Pointer to an array
   * @size: Size of the array
   * Return: Nothing
   */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
}

/**
  * partition - Partitions a given list of unsorted numbers
  * @array: Array to be sorted
  * @left: lower boundary
  * @right: upper boundary
  * @size: size of the array
  * Return: Nothing
  */

int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left - 1;
	int j;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[right] < array[i + 1])
	{
		swap(&array[i + 1], &array[right]);
		print_array(array, size);
	}
	return (i + 1);
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

/**
  * quickSort - Sorts an array of integers in ascending order using the Quick
  * sort algorithm
  * @array: Pointer to an array
  * @left: Starting index
  * @right: Ending index
  * @size: size of the array
  * Return: Nothing
  */

void quickSort(int *array, int left, int right, size_t size)
{
	int j;

	if (left < right)
	{
		j = partition(array, left, right, size);
		quickSort(array, left, j - 1, size);
		quickSort(array, j + 1, right, size);
	}
}
