#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int i;

	printf("Input Number : ");
	scanf_s("%d", &n);

	printf("\nDivisors(except Target) : ");

	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	}

	printf("\nsum : %d\n", sum);

	return 0;
}