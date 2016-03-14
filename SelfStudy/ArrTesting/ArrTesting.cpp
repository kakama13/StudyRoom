#include <stdio.h>

void swap(int *a);

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i;

	swap(arr);

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}

void swap(int *arr)
{
	int j = 4;

	arr[j] = *(arr + 1);
}