#include <stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
    printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
    printf("\t\t\t\t||         **         ||\n");
    printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int a, b, c;
	printf("Masukan bilangan yang mau di uji: ");
	scanf("%d", &a); fflush(stdin);
	b = 0;
	for (c = 1; c <= a; c++)
	{
		if ((a%c)==0)
		{
			b++;
		}
	}
	if (b == 2)
	{
		printf("Bilangan %d adalah PRIMA", a);
	}
	else
	{
		printf("Bilangan %d adalah BUKAN PRIMA", a);
	}
	getchar();
}
