#include <stdio.h>


void main()
{
	printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");
	
	int a = 1, b = 0, c = 0, x, d = 0;
        printf("Input how much you want to show the * : ");
        scanf("%d", &x); fflush(stdin);
        while (a <= x)
        {
                for(b =0; b < (x - d); b++)
                {
                        printf(" ");
                }
               
                for ( c = 0;c < (a-1); c++)
                {
                        printf("*");
                }
                printf("\n");
                a++;
                d++;
        }
        
        a = 1; b = 0; c = 0; d = 0;
        while (a <= x)
        {
                for ( c = 0;c < (a-1); c++)
                {
                        printf(" ");
                }
                for(b =0; b < (x - d); b++)
                {
                        printf("*");
                }
               
                
                printf("\n");
                a++;
                d++;
        }
        
        getchar();
	
}
