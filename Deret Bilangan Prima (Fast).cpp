#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	long int x, h, sqr, i, a;
	double n;
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
	time_t start,end;
	time (&start);
	for(i = 2; i <= x; i++)
	{
		if(i==2)
		{
			printf("Prima value=%d\n", i);
			continue;
		}
		else if(i%2 == 0)
		{
			continue;
		}
		else
		{
			h=0;
			n=i;
			sqr = sqrt(n);
			for(a=3;a <= sqr;a+=2)
			{
				if(i%a == 0)
				{
					h=1;
					break;
				}
			}
			if(h==0)
			{
				printf("Prima value=%d\n", i);
			}
		}
		
	}
	time (&end);
	double dif = difftime (end,start);
	printf("=============Elapsed time is %6.2lf seconds===========\n",dif );
	getchar();


}
