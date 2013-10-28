#include<stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int n, i, a=1, c=1, b=0;
	printf("Masukan N: ");
	scanf("%d", &n); fflush(stdin);
	for(i=1; i<=n-1; i++)
	{
		a+=b;
		b=c;
		c=a;
		printf("%d ", a);
		if(a==1)
		{
			printf("%d ", a);
		}
	}
	getchar();
}
