#include <stdio.h>
#include <stdbool.h>

bool compare(const void *a, const void *b) {
	return (*(int *)a == *(int *)b);
}

int search(void *arr, int arr_size, int ele_size, void *x, bool compare(const void *, const void *)) {
	char *ptr = (char *)arr;
	int i;
	for(i=0;i<arr_size;i++) {
		if(compare(ptr + i*ele_size, x))
			return i;
	}
	return -1;
}

int main() {
	int arr[] = {2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 7;
	printf("Returned index is %d\n", search(arr, n, sizeof(int), &x, compare));
	return 0;
}