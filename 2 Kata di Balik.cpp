#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int a=0, j, x=0;
	char kata[100];
	do
	{
		a=0;
		printf("Input kalimat [2 kata]: ");
		gets(kata);
		for(j=0; j<strlen(kata); j++)
		{
			if(kata[j] == ' ')
			{
				a++;
			}
		}
	}while(a!=1);
	printf("Result: ");
	for(j=0; j<strlen(kata); j++)
	{
		if(kata[j] == ' ')
		{
			while(kata[j] != '\0')
			{
				printf("%c", kata[j+1]);
				j++;
			}
			while(kata[x] != ' ')
			{
				printf("%c", kata[x]);
				x++;
			}
		}
	}
	getchar();
}
