#include "sort.h"

/**
  * bubble_sort - Sorts an array of integers in ascending order
  * @array: pointer to a list of array
  * @size: size of the array
  *
  * Return: nothing
  */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	size_t temp = 0;

	if (array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{

			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
