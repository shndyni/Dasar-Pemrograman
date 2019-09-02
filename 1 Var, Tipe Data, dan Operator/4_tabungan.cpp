/* PROGRAM menghitung_sisa_gaji  */
/* Program untuk menghitung sisa gaji yang ditabung */
#include <stdio.h>
main()
{
	//Deklarasi variabel
	int gaji, biaya_sekolah, cicilan_rumah, sisa;
	
	//Masukkan gaji yang diterima
	printf("Masukkan Gaji = ");
	scanf("%d", &gaji);
	printf("Masukkan Biaya Sekolah = ");
	scanf("%d", &biaya_sekolah);
	printf("Masukkan Cicilan Rumah = ");
	scanf("%d", &cicilan_rumah);

	//Hitung sisa gaji
	sisa = gaji-(biaya_sekolah+cicilan_rumah);
	printf("Sisa Gaji Ibu = %d", sisa);
	return 0;
}
