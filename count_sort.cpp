#include <stdio.h>

void CountSort(int *a, int N)
{
	int max = 9;
	int *count_array = new int[max + 1];
	int *temp = new int[N];

	int i;
	for (i = 0; i < N; i++) {
		count_array[a[i]]++;
	}

	for (i = 1; i <= max; i++) {
		count_array[i] = count_array[i] + count_array[i - 1];
	}

	for (i = N-1; i >=0; i--) {
		temp[count_array[a[i]] - 1] = a[i];
		count_array[a[i]]--;
	}

	for (i = 0; i < N; i++) {
		printf("%d ", temp[i]);
	}
	printf("\n");
}


int main()
{
	int a[10] = {5,3,1,2,7,6,8,0,9,4};

	CountSort(a, 10);

	return 0;
}
