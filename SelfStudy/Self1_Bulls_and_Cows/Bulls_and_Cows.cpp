#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{	
	int target[3];
	int input[3];
	int i,j;
	int strike = 0, ball = 0;
	int count = 0;
	int err = 0;


	srand((unsigned)time(NULL));

	do {
		for (i = 0; i < 3; i++) 
			target[i] = rand() % 10;
	} while ((target[0] == target[1]) || (target[1] == target[2]) || (target[2] == target[0]));
	

	//for (i = 0; i < 3; i++)	printf("%d", target[i]);	//For testing


	while (1)
	{
		strike = 0;
		ball = 0;

		printf("Input three numbers(0~9) : ");
		scanf_s("%d %d %d", &input[0], &input[1], &input[2]);


		for (i = 0; i < 3; i++)
		{
			if (input[i] > 9 || input[i] < 0)
			{
				err++;
				break;
			}
		}

		if (input[0] == input[1] || input[1] == input[2] || input[2] == input[0]) err++;
		
		if (err)
		{
			printf("ERROR! Plz retry!\n\n");
			err = 0;
			continue;
		}


		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (target[i] == input[j])
				{
					if (i == j) strike++;
					else ball++;

					break;
				}
			}
		}

		count++;

		if (strike == 3)
		{
			printf("  3 Strikes!\n");
			printf("  Congratulations! You Won!\n");
			printf("  You used %d chances.\n", count);
			break;
		}

		printf("%d strike   %d ball\n\n", strike, ball);
	}
	

	return 0;
}