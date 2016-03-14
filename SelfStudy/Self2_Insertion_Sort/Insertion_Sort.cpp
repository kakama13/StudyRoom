#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[100];
	int A;
	int N;
	int i, j;

	srand((unsigned)time(NULL));

	printf("How many do you want to sort? ");
	scanf_s("%d", &N);


	for (i = 0; i < N; i++)
	{
		arr[i] = rand() % 10000 + 1;
		printf("%d ", arr[i]);
	}


	for (i = 1; i < N ; i++)
	{
		printf("\n");

		A = arr[i];

		for (j = i-1; j >= 0; j--)
		{
			if (arr[j] > A)
				arr[j + 1] = arr[j];
			else
				break;
		}

		arr[j + 1] = A;


		for (j = 0; j < N; j++)
			printf("%d ", arr[j]);

	}




	return 0;
}