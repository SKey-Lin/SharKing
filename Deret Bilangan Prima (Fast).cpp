#include<stdio.h>
#include<string.h>
#include<time.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	long int x, i;
	char r[2];
	do
	{
		printf("Input Max range [100..100 000 000]: ");
		scanf("%ld", &x); fflush(stdin);
	}while(x < 100 || x > 100000000);
	do
	{
		printf("Show the result <y/n>? ");
		scanf("%s", &r); fflush(stdin);
	}while(strcmpi(r, "y") != 0 && strcmpi(r, "n") != 0);
	for(i = 2; i <= x; i++)
	{
		if(i==2 || i==3 || i==5 || i==7)
		{
			printf("Prime value=%ld\n", i);
		}
		if(i%2==0 || i%3 == 0 || i%5 == 0 || i%7 == 0)
		{
			continue;
		}
		printf("Prima value=%d\n", i);
	}
	getchar();
}
