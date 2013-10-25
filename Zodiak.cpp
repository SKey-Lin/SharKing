#include<stdio.h>
#include<stdlib.h>

void main()
{
	awal: printf("\t\t\t\t========================\n");
	printf("\t\t\t\t|| %c%c%c 1701313990 %c%c%c ||\n", 6,3,5,5,3,6);
	printf("\t\t\t\t||         **         ||\n");
	printf("\t\t\t\t||  %c   SharKing   %c  ||\n", 6,6);
	printf("\t\t\t\t========================\n\n\n");
	printf("Pilihlah zodiak kalian: \n");
	printf("A. Aries\n");
	printf("B. Taurus\n");
	printf("C. Gemini\n");
	printf("D. Cancer\n");
	printf("E. Leo\n");
	printf("F. Virgo\n");
	printf("G. Libra\n");
	printf("H. Scorpio\n");
	printf("I. Sagittarius\n");
	printf("J. Capricorn\n");
	printf("K. Aquarius\n");
	printf("L. Pisces\n");
	char jawab;
	char ulang;
	printf("Zodiak Anda adalah [A-L](Kapital!): ");
	scanf("%c", &jawab); fflush(stdin);
	system("CLS");
	switch(jawab)
	{
	case 'A' : printf("Zodiak Anda adalah Aries.\nAnda cocok sekali dengan Gemini, Leo, Aquarius, Sagitarius.\nBoleh juga dengan Aries, Libra.\nKurang cocok dengan Cancer, Capricorn.\nTidak cocok dengan Taurus, Virgo, Scorpio, Pisces.");
		ulang1: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang1;
		}
			break;
	case 'B' : printf("Zodiak Anda adalah Taurus.\nAnda cocok sekali dengan Cancer, Virgo, Capricorn, Pisces.\nBoleh juga dengan Taurus, Scorpio.\nKurang cocok dengan Leo, Aquarius.\nTidak cocok dengan Aries, Gemini, Libra, Sagitarius.");
		ulang2: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang2;
		}
		break;
	case 'C' : printf("Zodiak Anda adalah Gemini.\nAnda cocok sekali dengan Aries, Leo, Libra, Aquarius.\nBoleh juga dengan Gemini, Sagitarius.\nKurang cocok dengan Virgo, Pisces.\nTidak cocok dengan Taurus, Cancer, Scorpio, Capricorn.");
		ulang3: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang3;
		}
		break;
	case 'D' : printf("Zodiak Anda adalah Cancer.\nAnda cocok sekali dengan Taurus, Virgo, Scorpio, Pisces.\nBoleh juga dengan Cancer, Capricorn.\nKurang cocok dengan Aries, Libra.\nTidak cocok dengan Gemini, Leo, Sagitarius, Aquarius.");
		ulang4: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang4;
		}
		break;
	case 'E' : printf("Zodiak Anda adalah Leo.\nAnda cocok sekali dengan Aries, Gemini, Libra, Sagitarius.\nBoleh juga dengan Leo, Aquarius.\nKurang cocok dengan Taurus, Scorpio.\nTidak cocok dengan Cancer, Virgo, Capricorn, Pisces.");
		ulang5: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang5;
		}
		break;
	case 'F' : printf("Zodiak Anda adalah Virgo.\nAnda cocok sekali dengan Taurus, Cancer, Scorpio, Capricorn.\nBoleh juga dengan Virgo, Pisces.\nKurang cocok dengan Gemini, Sagitarius.\nTidak cocok dengan Aries, Leo, Libra, Aquarius.");
		ulang6: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang6;
		}
		break;
	case 'G' : printf("Zodiak Anda adalah Libra.\nAnda cocok sekali dengan Gemini, Leo, Aquarius, Sagitarius.\nBoleh juga dengan Aries, Libra.\nKurang cocok dengan Cancer, Capricorn.\nTidak cocok dengan Taurus, Virgo, Scorpio, Pisces.");
		ulang7: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang7;
		}
		break;
	case 'H' : printf("Zodiak Anda adalah Scorpio.\nAnda cocok sekali dengan Cancer, Virgo, Capricorn, Pisces.\nBoleh juga dengan Taurus, Scorpio.\nKurang cocok dengan Leo, Aquarius.\nTidak cocok dengan Aries, Gemini, Libra, Sagitarius.");
		ulang8: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang8;
		}
		break;
	case 'I' : printf("Zodiak Anda adalah Sagittarius.\nAnda cocok sekali dengan Aries, Leo, Libra, Aquarius.\nBoleh juga dengan Gemini, Sagitarius.\nKurang cocok dengan Virgo, Pisces.\nTidak cocok dengan Taurus, Cancer, Scorpio, Capricorn.");
		ulang9: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang9;
		}
		break;
	case 'J' : printf("Zodiak Anda adalah Capricorn.\nAnda cocok sekali dengan Taurus, Virgo, Scorpio, Pisces.\nBoleh juga dengan Cancer, Capricorn.\nKurang cocok dengan Aries, Libra.\nTidak cocok dengan Gemini, Leo, Aquarius, Sagitarius.");
		ulang10: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang10;
		}
		break;
	case 'K' : printf("Zodiak Anda adalah Aquarius.\nAnda cocok sekali dengan Aries, Gemini, Libra, Sagitarius.\nBoleh juga dengan Leo, Aquarius.\nKurang cocok dengan Taurus, Scorpio.\nTidak cocok dengan Cancer, Virgo, Capricorn, Pisces.");
		ulang11: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang11;
		}
		break;
	case 'L' : printf("Zodiak Anda adalah Pisces.\nAnda cocok sekali dengan Taurus, Cancer, Scorpio, Capricorn.\nBoleh juga dengan Virgo, Pisces.\nKurang cocok dengan Gemini, Sagitarius\nTidak cocok dengan Aries, Leo, Libra, Aquarius.");
		ulang12: printf("\n\nApakah Anda ingin mengulang [Y/T]? ");
		scanf("%c", &ulang); fflush(stdin);
		switch(ulang)
		{
		case 'Y' : system("CLS"); goto awal; break;
		case 'T' : goto keluar; break;
		default : printf("Hanya Y dan T!"); goto ulang12;
		}
		break;
	default : printf("\n\n\n\n\t\t\tAnda salah meng-input pilihan!\n\t\t\tMohon pilih salah satu dari A sampai L!\n\t\t\tDengan menggunakan huruf kapital!"); getchar(); system("CLS"); goto awal;
	}
	getchar();
	keluar: ;
}
