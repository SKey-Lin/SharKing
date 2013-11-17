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
		int i, vokal=0, kons=0;
       printf("Masukan kalimat: ");
	   scanf("%[^\n]s", &kalimat); fflush(stdin);
	   for(i=0; i<strlen(kalimat); i++)
	   {
		  if(kalimat[i] == 32)
		  {
			  continue;
		  }
		  else if(tolower(kalimat[i]) == 'a' || tolower(kalimat[i]) == 'e' || tolower(kalimat[i]) == 'i' || tolower(kalimat[i]) == 'u' || tolower(kalimat[i]) == 'o')
		  {
			  vokal++;
		  }
		  else
		  {
			  kons++;
		  }
	   }
	   printf("\n\nHuruf vokal pada kalimat tersebut adalah sebanyak %d", vokal);
	   printf("\nHuruf konsonan pada kalimat tersebut adalah sebanyal %d", kons);
       getchar();
}
