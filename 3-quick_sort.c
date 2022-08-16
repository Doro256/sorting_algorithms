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

	quickSort(array, 0, size, size);
}

/**
  * partition - Partitions a given list of unsorted numbers
  * @array: Array to be sorted
  * @left: lower boundary
  * @right: upper boundary
  * Return: Nothing
  */

int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[left];
	int i = left, j = right;

	do {
		do {
			i++;
		} while (array[i] <= pivot);
		do {
			j--;
		} while (array[j] > pivot);

		if (i < j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	} while (i < j);

	swap(&array[left], &array[j]);
	print_array(array, size);
	return (j);

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
  * Return: Nothing
  */

void quickSort(int *array, int left, int right, size_t size)
{
	int j;

	if (left < right)
	{
		j = partition(array, left, right, size);
		quickSort(array, left, j, size);
		quickSort(array, j + 1, right, size);
	}
}
