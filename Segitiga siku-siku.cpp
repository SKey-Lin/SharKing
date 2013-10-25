#include <stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
        printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
        printf("\t\t\t\t||         **         ||\n");
        printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
        printf("\t\t\t\t========================\n\n\n");
	
	int i = 0, j = 0, n, k=0;
	printf("Input how much you want to show the * : ");
	scanf("%d", &n);
	while (i <= n)
	{
		j = (n-k);
		while (j >= 0)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i = i + 1;
		k++;
	}

	getchar();
	getchar();
}
