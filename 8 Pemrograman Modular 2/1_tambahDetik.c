//Program Tambah Detik

#include <stdio.h>
#include <math.h>

void waktu(int hh,int mm,int ss,int p)
{
	int jumlah,sisa;
	//Konversi ke detik
	hh = hh*3600;
	mm = mm*60;
	jumlah = hh+mm+ss+p;
	
	//Konversi dari detik ke jam menit detik
	hh=jumlah/3600;
	sisa=jumlah%3600;
	mm=sisa/60;
	ss=sisa%60;
	
	//Output
	printf("%d Jam %d Menit %d Detik",hh,mm,ss);
}

//Program Utama
int main()
{
	//Deklarasi variabel
	int jam,menit,detik,detik1;
	
	//Input
	printf("Masukkan Jam = ");
	scanf("%d",&jam);
	printf("Masukkan Menit = ");
	scanf("%d",&menit);
	printf("Masukkan Detik = ");
	scanf("%d",&detik);
	printf("Masukkan Detik yang akan di tambahkan = ");
	scanf("%d",&detik1);
	
	waktu(jam,menit,detik,detik1);	

return 0;	
}

