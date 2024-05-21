#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present
 *         or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;
	size_t dif;

	if (array == NULL)
		return (-1);

	while (l <= h && value >= array[l] && value <= array[h])
	{
		dif = h - l;
		pos = l + (((double)dif / (array[h] - array[l])) * (value - array[l]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}

	return (-1);
}
