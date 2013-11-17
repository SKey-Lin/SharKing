#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	char kalimat[100];
	int i, j, n=0, a=0;
	printf("Masukan Kalimat: ");
	scanf("%[^\n]s", &kalimat); fflush(stdin);

	for(i=0; i<strlen(kalimat); i++)
	{
		n=0;
		for(j=i+1; j<strlen(kalimat); j++)
		{
			if(tolower(kalimat[j]) == tolower(kalimat[i])) continue;
			else if(kalimat[i] == 32) continue;
			n++;
		}
		if (n==strlen(kalimat)-(i+1)) a++;
	}
	printf("Jumlah karakter yang terpakai %d", a);
	getchar();
}
