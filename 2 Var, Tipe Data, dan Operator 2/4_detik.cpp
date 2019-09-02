/* Program Konversi Jam */
/* Program yang dapat mengkonversi waktu dari jumlah detik menjadi Jam-Menit-Detik */
#include <stdio.h>
int main()
{
	//Deklarasi Variabel
	int jlh_detik, jam, sisa, mnt, dtk;
	
	//Masukkan Jumlah Detik
	printf("Jumlah Detik = ");
	scanf("%d", &jlh_detik);
	
	//Hitung Jam-Menit-Detik	
	jam = jlh_detik/3600;
	sisa = jlh_detik%3600;
	mnt = sisa/60;
	dtk = sisa%60;
	printf("%d Detik = ", jlh_detik);
	printf("%d jam", jam);
	printf(" %d menit", mnt);
	printf(" %d detik", dtk);
	return 0;
}
