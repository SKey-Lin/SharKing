#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void main()
{
	int e, x, a, b=0, c=0, d, j, k, l;
	char r[2];

	srand( time(NULL));

	printf("\n\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	do
	{
		while(c != 0)
		{
			printf("\n");
			for (d = 1 ; d <= 80 ; d++)
			{
				printf("*");
			}
			c=0;
		}
		
		printf("\n\t\t\t\t    Random Generator\n");
		printf("\t\t\t\t    ================\n");

		do
		{
			printf("\n\nInsert the number of numbers to be random [1...10]: ");
			scanf("%d", &e); fflush(stdin);
		}while(e <= 0 || e > 10);

		printf("\n\n\t\t\t");
		for (x = 1; x <= e; x++)
		{
			for(j = 0; j <= 500; j++)
			{
				for(k = 0; k <= 500; k++)
				{
					for(l = 0; l <= 200; l++)
					{}
				}
			}
			a = rand()%10+1;
			printf("%d  ", a);
			b += a;
		}
		for(j = 0; j <= 500; j++)
			{
				for(k = 0; k <= 500; k++)
				{
					for(l = 0; l <= 500; l++)
					{}
				}
			}
		printf("\n\nSum of numbers that have been randomed = %d\n\n", b);
		c++;
		do
		{
			printf("Do you want to repeat [y/n] ? ");
			scanf("%s", &r); fflush(stdin);
		}while (strcmpi(r, "y") != 0 && strcmpi(r, "n") != 0);
	}while (strcmpi (r, "y") == 0);
}
