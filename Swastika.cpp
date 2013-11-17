#include<stdio.h>

void main()
{
	int n,i, j;
	printf("Input Number: ");
	scanf("%d", &n); fflush(stdin);
	printf("\n\n");
	for(i=0; i<n-1; i++)
	{
		if(i==0)
		{
			printf("*");
			for(j=0; j<n-1; j++)
			{
				printf(" ");
			}
			for(j=0; j<n+1;j++)
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
			for(j=0; j<n-1; j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	for(i=0; i<(2*n)+1; i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=0; i<n-1; i++)
	{
		if(i==n-2)
		{
			for(j=0; j<n+1;j++)
			{
				printf("*");
			}
			for(j=0; j<n-1; j++)
			{
				printf(" ");
			}
			printf("*");
		}
		else
		{
			for(j=0; j<n; j++)
			{
				printf(" ");
			}
			printf("*");
			for(j=0; j<n-1; j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}

	getchar();
}
