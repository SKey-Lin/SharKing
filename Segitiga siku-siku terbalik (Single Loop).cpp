#include<stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int n, i, a = 0, k=1, l=1;
	printf("Masukan angka: ");
	scanf("%d", &n); fflush(stdin);
	for(i = 1; i <= (n*n); i++)
	{
		if(i == (n*k)+l)
		{
			printf(" ");
			if (l < k)
			{
				l++;
			}
			else if(l == k)
			{
				l=1;
				k++;
			}
		}
		else
		{
			printf("*");
		}
		a++;
		if (a == n)
		{
			printf("\n");
			a = 0;
		}
	}
	getchar();
}
