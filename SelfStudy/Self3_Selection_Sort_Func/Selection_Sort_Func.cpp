#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int * a, int *b);

void selectsort(int *arr, int n);

int main()
{
	int arr[100];
	int i;
	int n;

	srand((unsigned)time(NULL));

	printf("How many do you want to sort?(2~100) \n");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000 + 1;
		printf("%d ", arr[i]);
	}

	selectsort(arr, n);

	return 0;
}


void selectsort(int *arr,int n)
{
	int i, j , index;
	int min = 0;

	for (i = 0; i < n - 1; i++)
	{
		printf("\n");

		min = arr[i];

		for (j = i + 1; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}

		if (arr[i] != min)
			swap(arr + i, arr + index);


		for (j = 0; j < n; j++)
			printf("%d ", arr[j]);
	}
}


void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}