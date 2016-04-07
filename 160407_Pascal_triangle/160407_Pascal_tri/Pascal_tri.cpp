#include <stdio.h>

int arr[30][30] = { 0 };

void print1(int n);
void print2(int n);
void print3(int n);

int main()
{
	int m, n;
	int i, j;
	int f = 1;


	printf("Input Size(1~30) : ");
	scanf_s("%d", &n);
	printf("Input type(1~3) : ");
	scanf_s("%d", &m);

	if (n < 1 || n >30 || m < 1 || m >3) return 0;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < f; j++)
		{
			if (j == 0 || j == (f - 1)) arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
		f++;
	}

	switch (m) {
	case 1: print1(n);
		break;
	case 2:print2(n);
		break;
	case 3:print3(n);
		break;
	}

	return 0;
}


void print1(int n)
{
	int i, j;
	int f = 1;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < f; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
		f++;
	}

}

void print2(int n)
{
	int i, j;
	int f = n;
	int l = 0;

	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j < l; j++)
			printf("  ");

		for (j = 0; j < f; j++)
			printf("%d   ", arr[i][j]);
		printf("\n");
		f--;
		l++;
	}

}

void print3(int n)
{
	int i, j;
	int f = 1;

	for (j = n - 1; j >= 0; j--)
	{
		for (i = n - 1; i >= n - f; i--)
			printf("%d\t", arr[i][j]);
		printf("\n");
		f++;
	}


}