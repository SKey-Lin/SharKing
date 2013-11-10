#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	srand(time(NULL));
	char name[100], horse[11][100]={" ","1. Wil Bao","2. Makki Bao","3. Judge Bao","4. Shi Bao","5. Rin Bao","6. Win Bao","7. An Bao","8. Al Bao","9. Dav Bao","10. Gal Bao"}, sure[2];
	int money = 1000, no, bet, speed[11], i, x=0, max=0;
	speed[0] = 5;
	printf("\n\nWelcome to Bao Horse Racing... \(,\")/");
	printf("\n\nPlease Register to Start Racing... ^^");
	printf("\n\n=========================================================");

	printf("\n\nRegistration");
	printf("\n*-*-*-*-*-*-*");

	do
	{
		printf("\n\nInput your name [2..25]: ");
		scanf("%[^\n]s", &name); fflush(stdin);
	}while(strlen(name) < 2 || strlen(name) > 25);

	printf("\nRegister success!!");
	printf("\n\nPress ENTER to continue...");
	getchar();
	system("cls");
	printf("\n\n\n\nWelcome, %s", name);
	printf("\nEnjoy your time at Bao Horse Racing... (\",)/");
	printf("\n\n================================================");
	getchar();
	do
	{
	do
	{
		for(i=1;i<=10;i++)
		{
			speed[i] = rand()%15+25;
		}
		system("cls");
		printf("\n\n\n\nAvailable Horse :");
		printf("\n*-*-*-*-*-*-*-*-*-*");
		printf("\n\n1. Wil Bao");
		printf("\n2. Makki Bao");
		printf("\n3. Judge Bao");
		printf("\n4. Shi Bao");
		printf("\n5. Rin Bao");
		printf("\n6. Win Bao");
		printf("\n7. An Bao");
		printf("\n8. Al Bao");
		printf("\n9. Dav Bao");
		printf("\n10. Gal Bao");
		printf("\n\nYour money : $%d", money);
		printf("\n\n\n");
		do
		{
			printf("Input horse number [1..10] : ");
			scanf("%d", &no); fflush(stdin);
		}while(no < 1 || no > 10);
		printf("\n");
		do
		{
			printf("Input betting money [100..%d] : ", money);
			scanf("%d", &bet); fflush(stdin);
		}while(bet < 100 || bet > money);

		printf("\nYou choose : %s", horse[no]);

		printf("\n\nYou bet : $%d", bet);
		printf("\n\n=========================================================\n");
		do
		{
			printf("Are you sure [Y/N] ??");
			scanf("%s", &sure); fflush(stdin);
		}while(strcmpi(sure, "y") != 0 && strcmpi(sure,"n") != 0);
	}while(strcmpi(sure, "n") == 0);
	max = 0;
	for(i=1;i<=10;i++)
	{
		if(speed[i] > max)
		{
			max = speed[i];
			x = i;
		}
	}

	printf("\n=========================================================");

	if(horse[no] != horse[x])
	{
		printf("\n\nSorry, you lose... v_v");
		printf("\nYou lost $%d..", bet);
		money = money - bet;
		printf("\n\nThe winner is : %s..", horse[x]);
	}
	else
	{
		printf("\n\nCongratulation, you win... ^^");
		printf("\nYou get $%d..", bet*2);
		money = money + bet*2;
		printf("\n\nThe winner is : %s..", horse[x]);
	}
	printf("\n\n");
	do
	{
		printf("Do you want to continue [Y/N]??");
		scanf("%s", &sure); fflush(stdin);
	}while(strcmpi(sure, "y") != 0 && strcmpi(sure,"n") != 0);
	}while(strcmpi(sure, "y") == 0 && money > 100);

	if(money < 100 && strcmpi(sure, "y") == 0)
	{
		printf("\n\nSorry, you are run out of money... ^^");

		printf("\n\n\n\nPress ENTER to continue...");
		getchar();
		system("cls");
	}
	system("cls");
	printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\n\n\n\n\n\n\n\n\n\t\t\tYou'll never know until you've tried... ^^");
	printf("\n\n\t\t\t- KI -");
	printf("\n\n\n\n\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\n\n\nPress ENTER to quit...");
	getchar();
}
