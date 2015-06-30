//implementation of qsort
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
}

int main() {
	int arr[] = {10, 2, 3, 1, 4};
	int n = sizeof(arr)/sizeof(arr[0]), i;
	qsort(arr, n, sizeof(int), compare);
	for(i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}