#include "search_algos.h"
/**
 * binary_search - Seaches for an element in an array using binary search
 * @array: The array to search the element in
 * @size: The number of elements in the array
 * @value: The element to be found in the array
 *
 * Return: -1 if the array is NULL or value is not found, otherwise return
 * index of found value
 */

int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		int i;
		int mid;
		int left = 0;
		int right = size - 1;

		while (left <= right)
		{
			printf("Searching in array: ");
			for (i = left; i < right; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);

			mid = left + (right - left) / 2;
			if (array[mid] == value)
			{
				return (mid);
			}
			if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
	}

	return (-1);
}
