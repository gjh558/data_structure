#include <stdio.h>


int partition(int *array, int low, int high)
{
	int pivot = array[low];
	int i = low;
	int j = high;

	while (i < j) {
		while (i < j && array[j] > pivot) {
			--j;
		}
		array[i] = array[j];

		while (i < j && array[i] < pivot) {
			++i;
		}

		array[j] = array[i];

	}

	array[i] = pivot;

	return i;
}

void quick_sort(int *array, int low, int high)
{
	int pivot = partition(array, low, high);

	quick_sort(array, low, pivot - 1);
	quick_sort(array, pivot + 1, high);
}

int main()
{

	int i = 0;
	int a[10] = {3, 6,8,4,0, 9,2,1, 5, 7};
	quick_sort(a, 0, 9);
	//int index = partition(a, 0, 9);
	//printf("index = %d\n", index);
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
