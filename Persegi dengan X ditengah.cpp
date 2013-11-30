#include<stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int x, j, i;
	printf("Input panjang & lebar persegi: ");
	scanf("%d", &x); fflush(stdin);

	for(i=1; i <= x; i++)
	{
		for(j=1; j<=x; j++)
		{
			if(j==1|| j==x || i==1 || i==x || j==i || j+i==x+1)
			{	
				printf("*");
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
