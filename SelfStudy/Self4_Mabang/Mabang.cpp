#include <stdio.h>

int arr[99][99];


void printM(int size);

int main()
{
	int i, j;
	int x = 1;
	int n=0;

	do {
		printf("Size?(3~99, only odd num) ");
		scanf_s("%d", &n);
	} while (n >= 100 || n <= 2 || n % 2 == 0);
	

	i = 0;
	j = n/2;


	while (x <= n*n)
	{
		if (i < 0 ) i = n - 1;
		if (j < 0 ) j = n - 1;


		arr[i][j] = x;

		if (x % n == 0) i++;
		else 
		{
			i--;
			j--;
		}
		

		x++;

/*		printM(n);
		printf("\n"); */ //testing
	}


	printM(n);

	return 0;


}

void printM(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

}