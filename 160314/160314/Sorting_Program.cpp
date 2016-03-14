#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[10];

int menu();
void MakeArray();

int main()
{
	int n = 0;


	while (1)
	{
		switch (n) {
		case 0: MakeArray();
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4: return 0;

		}

		n = menu();

	}
}


void MakeArray()
{
	int i;

	srand((unsigned)time(NULL));

	printf("\n***Making New Random Array***\n");

	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 1000 + 1;
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