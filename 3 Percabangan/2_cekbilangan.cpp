/* Program Cek Bilangan */

#include <stdio.h>
int main()
{
	//Deklarasi
	int bilBulat;
	char ket;
	
	//Masukkan Nilai
	printf("Masukkan Angka (Bil.Bulat) = ");
	scanf("%d", &bilBulat);
	
	//Kondisi
	if (bilBulat == 0)
		printf("\nBilangan Nol", ket);
	else if (bilBulat %2 == 0)
		printf("\nBilangan Genap", ket);
	else
		printf("\nBilangan Ganjil", ket);
		
	return 0;	
}
