/* Program Gaji */

#include <stdio.h>

int main()
{		
	//Deklarasi variabel
	FILE *Fout;
	long int upah, jamKerja, gaji, lembur;
	char nama[30];
	
	Fout=fopen("slip.txt", "w");
	
	//Masukkan Nama
	printf("Nama = ");
	scanf("%s", &nama);
	
	//Masukkan Upah/jam
	printf("Upah/Jam = Rp.");
	scanf("%d", &upah);
	
	//Masukkan Jam Kerja
	printf("Lama Bekerja = ");
	scanf("%d", &jamKerja);
	
	if(jamKerja>40)
		{lembur=jamKerja-40;
		gaji=(jamKerja*upah);}
	else
		{lembur=0;
		gaji=(jamKerja*upah);}
	
	printf("\nNama Karyawan = %s \n", nama);
	printf("Lama Bekerja = %d Jam\n", jamKerja);
	printf("Jam Lembur = %d Jam\n", lembur);
	printf("Gaji = Rp.%d", gaji);
	
	fprintf(Fout, "Nama Karyawan = %s \n", nama);
	fprintf(Fout, "Lama Bekerja = %d Jam\n", jamKerja);
	fprintf(Fout, "Jam Lembur = %d Jam\n", lembur);
	fprintf(Fout, "Gaji = Rp.%d", gaji);
	
return 0;
}	
