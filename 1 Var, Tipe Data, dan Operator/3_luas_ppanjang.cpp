/* PROGRAM Persegi_Panjang */
/* Program untuk menghitung luas persegi panjang */
#include <stdio.h>
int main()
{
	//Deklarasi variabel
	int panjang, lebar, luas;
	
	//Masukkan sisi
	printf("Masukkan panjang = ");
	scanf("%d", &panjang);
	printf("Masukkan lebar = ");
	scanf("%d", &lebar);
	
	//Hitung luas
	luas = panjang*lebar;
	printf("Luas Persegi Panjang = %d", luas);
	return 0;
}
