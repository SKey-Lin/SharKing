#include<stdio.h>
#include<string.h>

void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");

	int i, j, a=0, max=0;
	char kalimat[100], x;
	printf("Input the sentences: ");
	scanf("%[^\n]s", &kalimat); fflush(stdin);

	for(i=0;i<strlen(kalimat);i++)
	{
		a=0;
		for(j=0; j<strlen(kalimat);j++)
		{
			if(kalimat[i] == kalimat[j])
			{
				a++;
			}
		}
		if(max < a)
		{
			max = a;
			x = kalimat[i];
		}
	}
	printf("Karakter berulang terbanyak dalam \"%s\" adalah '%c' sebanyak %d kali", kalimat, x, max);
	getchar();
}
