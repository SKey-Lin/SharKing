#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int pilih, a, b, x=1;
	char huruf[2];
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n+-------------------------+\n");
	printf("|Program Pencetak Bangunan|\n");
	printf("+-------------------------+\n");
	printf("1. Mencetak Persegi");
	printf("\n2. Mencetak Segitiga");
	printf("\n3. Exit\n");

	do {
		printf("Masukan Pilihan Anda: ");
		scanf("%d", &pilih); fflush(stdin);
	} while(pilih>3 || pilih < 1);

	switch(pilih)
	{
	case 1: do{system("CLS"); printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMencetak Persegi\n----------------\n"); do {printf("Masukkan angka [3..20]: "); scanf("%d", &pilih); fflush(stdin);}while(pilih < 3 || pilih > 20);
		do {printf("Masukan huruf [a..z]: "); scanf("%s", &huruf); fflush(stdin); }while(strcmpi(huruf, "a") < 0 && strcmp(huruf,"a") > (-25));
		for (a = 1; a <= pilih; a++)
		{
			for(b = 1; b <= pilih; b++)
			{
				printf("%s", huruf);
			}
			printf("\n");
		}
		do{
			printf("Apakah Anda ingin mengulang program? [y/t] ");
			scanf("%s", &huruf); fflush(stdin);
		}while (strcmpi(huruf, "y") != 0 && strcmpi(huruf, "n") != 0);
		}while(strcmpi(huruf, "y")==0);
		break;
	case 2: do{system("CLS"); printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMencetak Segitiga\n-----------------\n"); do {printf("Masukkan angka [3..20]: "); scanf("%d", &pilih); fflush(stdin);}while(pilih < 3 || pilih > 20);
		do {printf("Masukan huruf [a..z]: "); scanf("%s", &huruf); fflush(stdin); }while(strcmpi(huruf, "a") < 0 && strcmp(huruf,"a") > (-25));
		x=1;
		for (a = 1; a <= pilih; a++)
		{
			for(b = 1; b <= x; b++)
			{
				printf("%s", huruf);
			}
			x++;
			printf("\n");
		}
		do{printf("Apakah Anda ingin mengulang program? [y/t] ");
		scanf("%s", &huruf); fflush(stdin);
		}while (strcmpi(huruf, "y") != 0 && strcmpi(huruf, "n") != 0);
		}while(strcmpi(huruf, "y")==0);
		break;
	default: ;
	}
}
