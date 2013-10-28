#include<stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int x, a=0, b=1, j, k, i;
	printf("Input the *: ");
	scanf("%d", &x); fflush(stdin);
	for(i=1; i <= x/2; i++)
	{
		for(k=1; k <= (x-b)/2; k++)
		{
			printf(" ");
		}
		for(j=1; j <= i+a; j++)
		{
			printf("*");
		}
		b+=2;
		a++;
		printf("\n");
	}
	if(x%2==0)
	{
		for(i=1; i <= (x/2)-1;i++)
		{
			for(k=1; k <= i; k++)
			{
				printf(" ");
			}
			for(j=1; j <= i+a; j++)
			{
				printf("*");
			}
			a-=3;
			printf("\n");
		}
	}
	else
	{
		for(i=1; i <= (x/2)-1;i++)
		{
			for(k=1; k <= i+1; k++)
			{
				printf(" ");
			}
			for(j=1; j <= i+a-2; j++)
			{
				printf("*");
			}
			a-=3;
			printf("\n");
		}
	}
	getchar();
}
