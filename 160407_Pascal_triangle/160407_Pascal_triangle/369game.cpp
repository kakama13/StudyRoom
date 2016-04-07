#include <stdio.h>

int decide(int x);

int main()
{
	int count =0;
	int i;
	int start, end;

	do {
		printf("Set START, and END : ");
		scanf_s("%d %d", &start, &end);
	} while (start < 1 || start >= end);
	
	for (i = start; i <= end; i++)
	{
		if (i % 3 == 0) count++;
		else count += decide(i);

		//printf("%d ", i);
		//printf("Clap count : %d\n", count);

	}

	printf("Clap count : %d\n", count);

	return 0;
}


int decide(int x)
{
	int sw = 0;
	int temp;

	while (1)
	{
		temp = x % 10;

		if (temp % 3 == 0 && temp != 0) return 1;
		else if (x >= 10) x = x / 10;
		else return 0;
	}

}