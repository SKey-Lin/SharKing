#include<stdio.h>
#include<string.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	char kata[100];
	int counter, x=0, i;
	printf("Input kata: ");
	scanf("%s", &kata); fflush(stdin);
	counter = strlen(kata);

	for(i=0,counter; i<(int)(strlen(kata)/2);i++,counter--)
	{
		if(kata[i] == kata[counter-1])
		{
			x++;
		}
	}
	if (x == (int)((strlen(kata))/2))
	{
		printf("%s merupakan kata palindrom", kata);
	}
	else
	{
		printf("%s bukan merupakan kata palindrom", kata);
	}
	getchar();
}
