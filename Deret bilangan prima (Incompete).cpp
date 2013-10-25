#include <stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int x, c = 0, a, n, b;
	printf("Bilangan prima dari 1 sampai berapa yang ingin di tampilkan? ");
	scanf("%d", &x); fflush(stdin);
	for (a = 1 ; a <= x; a++);
	{
		n = 0;
		for (b = 1; b <= a; b++);
		{
			if ((a%b) == 0)
			{
				n++;
			}
		}
		if (n == 2)
		{
			printf("%d ", a);
			c++;
		}
	}
	printf("\n\nJumlah bilangan prima dari 1 sampai %d adalah %d", x, c);
	getchar();
}
