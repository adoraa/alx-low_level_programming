#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present
 * or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}

/**
 * recursive_binary_search - recursively searches for a value in a sorted array
 * of integers using the Advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the starting index of the array
 * @high: the ending index of the array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present
 */
int recursive_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		return (recursive_binary_search(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (recursive_binary_search(array, mid + 1, high, value));
	else
		return (recursive_binary_search(array, low, mid - 1, value));
}

/**
 * print_array - prints the elements of an array within a range
 * @array: pointer to the first element of the array
 * @low: the starting index of the array
 * @high: the ending index of the array
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
}
