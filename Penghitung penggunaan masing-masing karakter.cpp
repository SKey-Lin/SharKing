#include<stdio.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	char kalimat[100], x=0, i=0, j, n=0, a=0, kata[100];
	printf("Input sentences: ");
	scanf("%[^\n]s", &kalimat); fflush(stdin);
	while(kalimat[i] != 0)
	{
		x++;
		i++;
	}
	for(i=0; i<x; i++)
	{
		a=0;
		n=0;
		if(kalimat[i] == 32) continue;
		for(j=0; j<x; j++)
		{
			if(kalimat[i]>=65 && kalimat[i] <= 90) kalimat[i]=kalimat[i]+32;
			if(kalimat[j]>=65 && kalimat[j] <= 90) kalimat[j]=kalimat[j]+32;
			if(kalimat[i]==kalimat[j])
			{
				a++;
			}
		}
		for(j=0; j<i; j++)
		{
			if(kalimat[i]==kalimat[j])
			{
				n=1;
			}
		}
		if(n==1) continue;
		else printf("%c: %d\n", kalimat[i], a);
	}
	getchar();
}
