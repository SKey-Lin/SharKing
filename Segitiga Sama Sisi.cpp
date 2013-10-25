#include <stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
        printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
        printf("\t\t\t\t||         **         ||\n");
        printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
        printf("\t\t\t\t========================\n\n\n");
	
	int a = 1, b = 0, c = 0, x, d = 1;
	printf("Input how much you want to show the * : ");
	scanf("%d", &x); fflush(stdin);
	while (a <= x)
	{
		b = 0;
		while (b < (x - d))
		{
			printf(" ");
			b++;
		}
		c = 1;
		while (c <= a+(a-1))
		{
			printf("*");
			c++;
		}
		printf("\n");
		a++;
		d++;
	}
	getchar();
}
