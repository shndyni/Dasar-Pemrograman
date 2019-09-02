/* PROGRAM Luas_persegi */
/* Program untuk menghitung luas persegi */
#include <stdio.h>
int main()
{
	//Deklarasi variabel
	int sisi, luas;
	
	//Masukkan sisi
	printf("Masukkan sisi = ");
	scanf("%d", &sisi);
	
	//Hitung luas
	luas = sisi*sisi;
	printf("Luas persegi = %d", luas);
	return 0;
}
