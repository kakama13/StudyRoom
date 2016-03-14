#include <stdio.h>

int main()
{
	int A, B, C;
	long X;
	int arr[10] = { 0 };
	int i;


	printf("Input Three Numbers(100~999) : ");
	while (1)
	{
		scanf_s("%d %d %d", &A, &B, &C);
		if (A >= 100 && A < 1000 && B >= 100 && B < 1000 && C >= 100 && C < 1000) break;
		printf("Try Again!\n");
	}

	X = A*B*C;

	while (X != 0)
	{
		switch (X % 10)
		{
		case 0: arr[0]++;
			break;
		case 1: arr[1]++;
			break;
		case 2: arr[2]++;
			break;
		case 3: arr[3]++;
			break;
		case 4: arr[4]++;
			break;
		case 5: arr[5]++;
			break;
		case 6: arr[6]++;
			break;
		case 7: arr[7]++;
			break;
		case 8: arr[8]++;
			break;
		case 9: arr[9]++;
		}
		X = X / 10;
	}

	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);


	return 0;
}