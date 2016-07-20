#include <stdio.h>
int LeftChild(int i)
{
	return (2*i + 1);
}

void HeapAdjust(int a[], int i, int N)
{
	int child;
	int temp;

	for (temp = a[i]; LeftChild(i) < N; i = child)
	{
		child = LeftChild(i);

		if (child < N - 1 && a[child] < a[child + 1]) {
			child++;
		}
		if (temp < a[child]) {
			a[i] = a[child];
		} else {
			break;
		}
	}

	a[i] = temp;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void HeapSort(int *a, int N)
{
	int parent_of_end = N/2;
	int i ;
	for (i = parent_of_end; i  >= 0; i--) {
		HeapAdjust(a, i, N);
	}
/*
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
*/

	for (i = N -1; i > 0; i--) {
		swap(&a[i], &a[0]);

		HeapAdjust(a, 0, i);
	}
}

int main()
{
	int a[10] = {5,3,1,2,7,6,8,0,9,4};

	HeapSort(a, 10);

	int i = 0;
	for (;i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
