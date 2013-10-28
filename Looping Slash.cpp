#include<stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int x=0, y, a;
	printf("Input jarak [5..15]: ");
	scanf("%d", &a); fflush(stdin);
	while (x < 25)
	{
		for (y=1; y <= 79; y++)
		{
			if((x+y)%a == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	x++;
	}
	getchar();
}
