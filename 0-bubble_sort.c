#include "sort.h"
/**
 * bubble_sort - see below
 * Description - sorts the given array by iterating
 * from the front to the back switching number until
 * it is sorted in ascending order
 * @array: the inputted array
 * @size: size of the array
 * Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	size_t pos;
	int temp, check = 1;

	while (check != 0)
	{
		check = 0;
		for (pos = 0; pos + 1 < size; pos++)
		{
			if (array[pos] > array[pos + 1])
			{
				check++;
				temp = array[pos + 1];
				array[pos + 1] = array[pos];
				array[pos] = temp;
				print_array(array, size);
			}
		}
	}
}
