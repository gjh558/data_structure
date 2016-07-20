#include <stdio.h>

void bubble_sort(int *array, int size)
{
	int i = size - 1;

	while(i > 0) {
		int pos = 0;
		int j = 0;
		for ( j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {
				pos = j;
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}

		i = pos;
	}
}

int main()
{

	int i = 0;
	int a[10] = {3, 6,8,4,0, 9,2,1, 5, 7};
	bubble_sort(a, 10);
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
