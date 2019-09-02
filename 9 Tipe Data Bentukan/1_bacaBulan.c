//Program Membaca Bulan

#include<stdio.h>


	typedef struct {
		int dd, mm, yy;
	}date;
	
	main()
	{
	
	date tanggal, bulan, tahun;
	
	printf("PROGRAM KONVERSI BULAN\n\n");
	
	printf("Tanggal = ");
	scanf("%d", &tanggal.dd);
	
	printf("Bulan = ");
	scanf("%d", &bulan.mm);
	
	printf("Tahun = ");
	scanf("%d", &tahun.yy);
	 
	if(bulan.mm==1)
	printf("%d Januari %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==2)
	printf("%d Februari %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==3)
	printf("%d Maret %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==4)
	printf("%d April %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==5)
	printf("%d Mei %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==6)
	printf("%d Juni %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==7)
	printf("%d Juli %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==8)
	printf("%d Agustus %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==9)
	printf("%d September %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==10)
	printf("%d Oktober %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==11)
	printf("%d November %d", tanggal.dd, tahun.yy);
	else if(bulan.mm==12)
	printf("%d Desember %d", tanggal.dd, tahun.yy);
	else
	printf("Not Found!!");
	
return 0;	
}
