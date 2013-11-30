#include <stdio.h>
#include <math.h>

int main()
{
        printf("\t\t\t\t========================\n");
    printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
    printf("\t\t\t\t||         **         ||\n");
    printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
        printf("\t\t\t\t========================\n\n\n");

        double bil8, bil9, bil6, bil10, bil11;
        long int bil3, bil4, bil5, bil1, bil2, bil7, bil12, bil13, bil14, bil15, bil16, bil17;
        printf("Masukan bilangan pertama: ");
        scanf("%ld", &bil1); fflush(stdin);
        printf("Masukan bilangan kedua: ");
        scanf("%ld", &bil2); fflush(stdin);
        bil3 = bil1 + bil2;
        printf("\nHasil penjumlahannya adalah: %ld\n", bil3);
        if (bil1 > bil2)
                {
                        bil4 = bil1 - bil2;
                        printf("Selisihnya adalah: %ld\n", bil4);
                }
        else
                {
                        bil4 = bil2 - bil1;
                        printf("Selisihnya adalah: %ld\n", bil4);
                }
        bil5 = bil1 * bil2;
        printf("Hasil perkaliannya adalah: %ld\n", bil5);
        bil8 = bil1;
        bil9 = bil2;
        if (bil8 > bil9)
                {
                        bil6 = bil8 / bil9;
                        printf("%ld / %ld: %.2f\n", bil1, bil2, bil6);
                }
        else
                {
                        bil6 = bil9 / bil8;
                        printf("%ld / %ld: %.2f\n", bil2, bil1, bil6);
                }

        if (bil1 > bil2)
                {
                        bil7 = bil1 % bil2;
                        printf("Modulusnya adalah: %ld\n\n", bil7);
                }
        else
                {
                        bil7 = bil2 % bil1;
                        printf("Modulusnya adalah: %ld\n\n", bil7);
                }

        bil10 = sqrt(bil8);
        printf("Akar dari %ld adalah: %.2f\n", bil1, bil10);
        bil11 = sqrt(bil9);
        printf("Akar dari %ld adalah: %.2f\n", bil2, bil11);
        bil12 = bil1 * bil1;
        printf("%ld kuadrat adalah: %ld\n", bil1, bil12);
        bil13 = bil2 * bil2;
        printf("%ld kuadrat adalah: %ld\n", bil2, bil13);
        
        bil14 = pow(bil8, bil8);
        printf("\n%ld pangkat %ld adalah %ld", bil1, bil1, bil14);
        bil15 = pow(bil9, bil9);
        printf("\n%ld pangkat %ld adalah %ld", bil2, bil2, bil15);

        bil16 = pow(bil8, bil9);
		printf("\n\n%ld pangkat %ld adalah %ld", bil1, bil2, bil16);
		bil17 =  pow(bil9, bil8);
        printf("\n%ld pangkat %ld adalah %ld", bil2, bil1, bil17);

        getchar();
        return 0;
}
