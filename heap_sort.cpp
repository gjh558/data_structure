#include <stdio.h>

void HeapAdjust(int a[], int s, int length)
{
	int temp = a[s];
	int left = 2*s + 1;
	int right = 2*s + 2;

	if (a[left] < a[right]){ // right is bigger than left child
		if (a[s] < a[right]) {
			a[s] = a[right];
			a[right] = temp;
			s = right;
		}else
			return;
	} else if{
		if (a[s] < s[left]) {
			a[s] = a[left];
			a[left] = temp;
			s = left;
		}else 
			return;
	}

	HeapAdjust(a, s, length);
}
