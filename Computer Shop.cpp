#include<stdio.h>
#include<string.h>


void main()
{
	char name[31];
	char persen;
	int q, a, harga, ram, vga;
	long int total = 0, pay, disk, change;
	persen = '%';

	printf("\n\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	do
	{
		printf("Input a name [max 30]: ");
		scanf("%[^\n]s", &name); fflush(stdin);
	}while (strlen(name) > 30);

	printf("\n\nWelcome to Computer Shop");
	printf("\n==================================\n\n");

	do
	{
		printf("Input computer quantity you want to buy [1..5]: ");
		scanf("%d", &q); fflush(stdin);
	}while (q < 1 || q > 5);
	
	for (a = 1; a <= q; a++)
	{
		printf("\n");
		do
		{
			printf("Input VGA capacity for computer num. %d [128..1024] MB (@ Rp.9200/MB) :", a);
			scanf("%d", &vga); fflush(stdin);
		}while (vga < 128 || vga > 1024);
		do
		{
			printf("Input RAM capacity for computer num. %d [128..1024] MB (@ Rp.7600/MB) :", a);
			scanf("%d", &ram); fflush(stdin);
		}while(ram < 128 || ram > 1024);
		harga = (vga*9200) + (ram*7600);
		printf("Total Price of computer num. %d is Rp. %d", a, harga);
		total = total + harga;
		printf("\n");
	}

	printf("\n\nTotal price of all items is Rp. %ld", total);
	disk = total * 0.9;
	printf("\nDiscount = 10%c, New Total Price = Rp. %ld", persen, disk);
	do
	{
		printf("\nInput payment [min %ld] : ", disk);
		scanf("%ld", &pay); fflush(stdin);
	}while(pay < disk);

	printf("\nThank You %s", name);
	change = pay - disk;
	printf("\nChange = Rp. %ld", change);

	getchar();
}
