/* Program Tagihan Listrik */
#include <stdio.h>
int main()
{
	//Deklarasi variabel
	FILE *Fout;
	float m_awal, m_akhir, selisih_meter, tagihan;
	
	Fout=fopen("slip.txt", "w");
	
	//Masukkan Meter Awal
	printf("Meter Awal = ");
	scanf("%f", &m_awal);
	
	//Masukkan Meter Akhir
	printf("Meter Akhir = ");
	scanf("%f", &m_akhir);
	
	//Hitung Tagihan
	selisih_meter = m_akhir-m_awal;
	tagihan = selisih_meter*1050;
	printf("Penggunaan listrik Anda bulan ini sebanyak %5.0f KWh \n", selisih_meter);
	printf("Tagihan listrik Anda Rp %5.0f", tagihan);
	fprintf(Fout, "Penggunaan listrik Anda bulan ini sebanyak = %5.0f KWh \n", selisih_meter);
	fprintf(Fout, "Tagihan listrik Anda Rp = %5.0f", tagihan);
	
	return 0;
}
