#include <stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
        printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
        printf("\t\t\t\t||         **         ||\n");
        printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
        printf("\t\t\t\t========================\n\n\n");
	
	int a = 1, b, c, d, n, e=1;
	printf("Masukan berapa banyak ASCII yang ingin di tampilkan? ");
	scanf("%d", &n); fflush(stdin);
	for (d = 1; d <= n; d++)
	{
		for (b = 1; b <= n; b++)
		{
			printf("%c", a);
			a++;
			e++;
		}
		printf(" ");
		if(e == 25)
		{
			for (c = 1; c <= n; c++)
			{
				printf("\n");
			}
		}
	}
	getchar();

	/* pingin output nya gini:
	tapi di batasin oleh inputan
	
	int f = 1;
	int z;
	int e;
	int h;
	for (e = 1; e <= 10; e++)
	{
		for (h = 1; h <= 5; h++)
		{
			for (z = 1; z <= 5; z++)
				{
					printf("%c", f);
					f = f + 1;
				}
			printf(" ");
		}
		printf("\n");
	}
	getchar();*/
}
