#include <stdio.h>

int main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");
	
	char nama[100];
	printf("Input Your Name :");
	scanf("%[^\n]",&nama);
	fflush(stdin);
	 
	
	float nilai;
	do{
	printf("Input Your IPK [0 - 4.0] :");
	scanf("%f", &nilai);
	fflush(stdin);
	}while (nilai<0 || nilai>4.0);


	if (nilai >= 3.50 && nilai <= 4.00) printf("Cumlaude");
		else if(nilai >= 3.0 && nilai < 3.5) printf("Outstanding");
			else if(nilai >= 2.5 && nilai < 3) printf("Very Good");
				else if(nilai >= 2.0 && nilai < 2.5) printf("Good");
					else printf("Poor");
	getchar();
	return 0;
}
