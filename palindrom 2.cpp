#include<stdio.h>
#include<string.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int counter, i;
	char kata[100], rev[100] = {' '};
	printf("Input Kata: ");
	gets(kata);
	counter = strlen(kata);
	for(counter, i=0; i < strlen(kata); counter--, i++)
	{
		rev[i] = kata[counter-1];
	}
	if (strcmp(kata, rev) == 0)
	{
		printf("%s merupakan kata palindrom", kata);
	}
	else
	{
		printf("%s bukan merupakan kata palindrom", kata);
	}

	getchar();
}
