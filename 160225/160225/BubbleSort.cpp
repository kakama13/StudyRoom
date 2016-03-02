#include <stdio.h>
#include <time.h>
#include <stdlib.h> //BubbleSort

int main()
{
	int n = 0;
	int i, j, temp;
	int arr[100];

	srand((unsigned)time(NULL));

	while ((n <= 1) || (n > 100))
	{
		printf("How many do you want to sort?(2~100)\n");
		scanf_s("%d", &n);
	}


	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000 + 1;
		if (i == 0) printf("Unsorted List\n");
		printf("%d ", arr[i]);
	}


	for (j = 0; j < n - 1; j++) //Sorting Algorithm
	{
		for (i = n - 1; i > j; i--)
		{
			if (arr[i] < arr[i - 1])
			{
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}
		}


	}


	for (i = 0; i < n; i++)
	{
		if (i == 0) printf("\n\nSorted List\n");
		printf("%d ", arr[i]);
	}

	return 0;

}