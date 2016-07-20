#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(int *a, int *tempbuf, int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int index = start;

	while(i <= mid && j <= end)
	{
		if (a[i] < a[j]) {
			tempbuf[index++] = a[i++];
		}else {
			tempbuf[index++] = a[j++];
		}
	}

	while (i <= mid) {
		tempbuf[index++] = a[i++];
	}

	while (j <= end) {
		tempbuf[index++] = a[j++];
	}

	for(i = start; i <= end; i++) {
		a[i] = tempbuf[i];
	}
}

void merge_sort(int *array, int *tempbuf, int start, int end)
{
	if (start >= end){
		return;
	}

	int mid = (start + end)/2;

	merge_sort(array, tempbuf, start, mid);
	merge_sort(array, tempbuf, mid + 1, end);

	merge(array, tempbuf, start, mid, end);
}

void MergeSort(int *a, int len)
{
	int *tempbuf = (int *)malloc(len);

	merge_sort(a, tempbuf, 0, len - 1);
}

int main()
{
	int a[10] = {5,3,1,2,7,6,8,0,9,4};

	MergeSort(a, 10);

	int i = 0;
	for (;i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
