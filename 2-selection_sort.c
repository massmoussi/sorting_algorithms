#include "sort.h"

/**
 * swap - funct swap two var values
 * @a: pntr t the first value
 * @b: pntr t the second value
 */


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - funct sort arary using selec sort algho
 * @array: pntr to unsort array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
