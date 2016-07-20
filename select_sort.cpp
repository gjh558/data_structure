#include <iostream>
#include <stdio.h>

using namespace std;

int select_min(int *array, int start_index, int size)
{
	int index = start_index;
	int i = start_index;
	for (; i < size; i++) {
		if (array[index] > array[i]) {
			index = i;
		}
	}

	return index;
}

void select_sort(int *array, int size)
{
	int i = 0;
	for (; i < size; i++) {
		int min_index = select_min(array, i, size);
		printf("min index = %d\n", min_index);
		int temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
	}
}

int main()
{

	int i = 0;
	int a[10] = {3, 6,8,4,0, 9,2,1, 5, 7};
	select_sort(a, 10);
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
