#include <iostream>
#include <stdio.h>

using namespace std;


void insert_sort2(int *array, int size)
{
	int i = 1;

	for(; i < size; i++) {
		int target = array[i];
		int j = i - 1;

		for (; j >= 0; j--) {
			if (target < array[j]) {
				array[j + 1] = array[j];
			} else {
				break;
			}
		}

		array[j + 1] = target;

	}

}

void insert_sort(int *array, int size)
{
	int i = 1;

	for (;i < size; i++) {
		int j = i;
		int target = array[i];

		for (; j > 0; j--) {
			if (array[j] < array[j - 1]) {
				int temp = array[j - 1];
				array[j-1] = array[j];
				array[j] = temp;
			} else {
				break;
			}
		}

	}
}

int main()
{
	int i = 0;
	int a[10] = {3, 6,8,4,0, 9,2,1, 5, 7};
	insert_sort2(a, 10);
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
