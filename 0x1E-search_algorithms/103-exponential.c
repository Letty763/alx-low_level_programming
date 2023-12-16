#include "search_algos.h"

/**
 * _binary_search - searches for an element using binary search algo
 * @array: The array to be searched in
 * @low: The low bound of the range
 * @high: The high bound of the range with the element
 * @value:  the elememtnt to be found
 *
 * Return: the index of the value in the array if found, otherwise -1
 */
int _binary_search(int *array, int low, int high, int value)
{
	int mid;
	int i;

	if (array != NULL)
	{
		while (low <= high)
		{
			printf("Searching in array: ");
			for (i = low; i < high; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			mid = low + (high - low) / 2;
			if (array[mid] == value)
				return (mid);
			if (array[mid] > value)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	return (-1);
}
/**
 * exponential_search - Searches for a value using the exponential search algo
 * @array: The array to be searched in
 * @size: The size if the array to be searched in
 * @value: The value to be found
 *
 * Return: the index of the element if found , otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int high;
	int low = 0;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (low = 1; low < (int)size && array[low] <= value; low *= 2)
		{
			printf("Value checked array[%d] = [%d]\n", low, array[low]);
		}
	}

	if (low >= (int)size)
		high = size - 1;
	else
		high = low;
	printf("Value found between indexes [%d] and [%d]\n", low / 2, high);
	return (_binary_search(array, low / 2, high, value));
}
