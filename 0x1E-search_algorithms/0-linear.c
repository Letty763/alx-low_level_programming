#include "search_algos.h"

/**
 * linear_search - searches for a value in array of intergers
 * @array: arrays of intergers to be searched
 * @size: The size of the array to be searched
 * @value: The element we are looking for
 *
 * Return: if value is not present in array or if array is NULL return -1
 * otherwise return first index of value if present.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
