#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int arr[10];
int arr2[10];

int menu();
void MakeArray();
void swap(int *a, int *b);
void bubblesort();
void selectsort();
void insertionsort();

int main()
{
	int n = 0;

	while (1)
	{
		switch (n) {
		case 0: MakeArray();
			break;
		case 1: bubblesort();
			break;
		case 2: selectsort();
			break;
		case 3: insertionsort();
			break;

		}

		n = menu();

		if (n == 4)
		{
			printf("\n***  BYE!  ***\n");
			return 0;
		}

		for (int i = 0; i < SIZE; i++)
		{
			arr2[i] = arr[i];
			if (i == 0) printf("\n*** Current Array ***\n");
			printf("%d ", arr2[i]);
		}
		printf("\n");
	}
}


void bubblesort()
{
	int i, j, k;

	printf("\n");

	for (j = 0; j < SIZE - 1; j++)
	{
		for (i = SIZE - 1; i > j; i--)
		{
			if (arr2[i] < arr2[i - 1])
				swap(&arr2[i], &arr2[i-1]);

			for (k = 0; k < SIZE; k++)
				printf("%d ", arr2[k]);
			printf("\n");
		}
	}
}


void selectsort()
{
	int i, j, index;
	int min = 0;

	for (i = 0; i < SIZE - 1; i++)
	{
		printf("\n");

		min = arr2[i];

		for (j = i + 1; j < SIZE; j++)
		{
			if (min > arr2[j])
			{
				min = arr2[j];
				index = j;
			}
		}

		if (arr2[i] != min)
			swap(&arr2[i], &arr2[index]);


		for (j = 0; j < SIZE; j++)
			printf("%d ", arr2[j]);
	}
	printf("\n");
}


void insertionsort()
{
	int i, j;
	int key;

	for (i = 1; i < SIZE; i++)
	{
		printf("\n");

		key = arr2[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr2[j] > key)
				arr2[j + 1] = arr2[j];
			else
				break;
		}

		arr2[j + 1] = key;

		for (j = 0; j < SIZE; j++)
			printf("%d ", arr2[j]);
	}

	printf("\n");
}


void MakeArray()
{
	int i;

	srand((unsigned)time(NULL));

	printf("\n***Making New Random Array***\n");

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 1000 + 1;
		arr2[i] = arr[i];
		printf("%d ", arr[i]);
	}

	printf("\n");
}


int menu()
{
	int n;

	printf("\n*****  Sorting Menu  *****\n");
	printf(" 1. Bubble Sort\n");
	printf(" 2. Selection Sort\n");
	printf(" 3. Insertion Sort\n");
	printf(" 4. Quit\n");
	printf(" 0. Make New Array\n");
	printf("   Select a sort : ");
	scanf_s("%d", &n);

	return n;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}