#include <stdio.h>

int AddPosi(unsigned int a);

int main()
{
	unsigned int N;
	
	printf("Input any number : ");
	scanf_s("%u", &N);

	do
	{
		N = AddPosi(N);
		printf("%u\n", N);
	} while (N >= 10);


	return 0;
}


int AddPosi(unsigned int a)
{
	int sum = 0;

	if (a < 10) { return a; }
	else { sum = a % 10 + AddPosi(a / 10); }

	return sum;
}