#include<stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int x, j, i,a=2,b=1;
	printf("Input panjang & lebar persegi: ");
	scanf("%d", &x); fflush(stdin);

	for(i=1; i <= x; i++)
	{
		for(j=1; j<=x; j++)
		{
			if(j==1|| j==x || i==1 || i==x || j==i)
			{	
				printf("*");
			}
			else if(i==a && j==x-b)
			{
				printf("*");
				a++;
				b++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getchar();
}
