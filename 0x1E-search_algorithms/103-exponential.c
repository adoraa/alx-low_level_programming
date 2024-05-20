#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present
 *         or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = (bound / 2 < size - 1) ? bound / 2 : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);

	return (binary_search(array, min + 1, bound < size ? bound : size, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the starting index of the array
 * @high: the ending index of the array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - prints the elements of an array within a range
 * @array: pointer to the first element of the array
 * @low: the starting index of the array
 * @high: the ending index of the array
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (size_t i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
}
