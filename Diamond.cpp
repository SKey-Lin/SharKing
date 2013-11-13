#include<stdio.h>


void main()
{

	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int x, i, j, a=0, k, b=0;
	printf("Input how mouch you want to show: ");
	scanf("%d", &x); fflush(stdin);
	if(x%2==0)
	{
		x=x/2;
	}
	else
	{
		x=x/2+1;
	}
	for (i=1;i<=x-1;i++)
	{
		for(j=0;j<(x-i);j++)
		{
			printf(" ");
		}
		for(k=1;k <= 1+2*(i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=x-1; i>=0; i--)
	{
		for(j=0; j<a; j++)
		{
			printf(" ");
		}
		for(k=1; k<=(1+2*i); k++)
		{
			printf("*");
		}
		a++;
		printf("\n");
	}
	getchar();
}
