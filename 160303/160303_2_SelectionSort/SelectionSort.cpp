#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int * a, int *b);

int main()
{
	int arr[100];
	int min;
	int i, j;
	int *p, *q;
	int n;
	int index;

	srand((unsigned)time(NULL));

	printf("How many do you want to sort?(2~100) \n");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000 + 1;
		printf("%d ", arr[i]);
	}

	

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
		{
			p = &arr[i];
			q = &arr[index];

			swap(p, q);

		}

		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j]);
		}

	}
	

	return 0;
}


void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}