#include "sort.h"
/**
 * selection_sort - see below
 * Description - iterates from the beginning to the end
 * of the array, finding the lowest value and then moving
 * it to the sorted portion, then it shortens the searchable
 * array and repeats till sorted
 * @array: the given unsorted array
 * @size: size of the array
 * Return: Void
*/
void selection_sort(int *array, size_t size)
{
	size_t pos, pos_l = 0, hold = 0;
	int temp;

	while (pos_l < size)
	{
		hold = pos_l;
		for (pos = pos_l + 1; pos < size; pos++)
		{
			if (array[pos] < array[hold])
				hold = pos;
		}
		temp = array[pos_l];
		array[pos_l] = array[hold];
		array[hold] = temp;
		print_array(array, size);
		pos_l++;
	}
}
