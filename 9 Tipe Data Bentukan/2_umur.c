//Program Hitung Umur

#include<stdio.h>


	typedef struct {
		int dd, mm, yy, dd1, mm1, yy1;
	}umur; 
	umur x;
	
	main()
	{
	
	int hari, bulan, tahun;
	
	printf("PROGRAM HITUNG UMUR\n\n");
	
	printf("Masukkan Tanggal Lahir = ");
	scanf("%d", &x.dd);
	
	printf("Masukkan Bulan Lahir= ");
	scanf("%d", &x.mm);
	
	printf("Masukkan Tahun Lahir= ");
	scanf("%d", &x.yy);
	
	printf("\n");
	
	printf("Masukkan Tanggal Sekarang = ");
	scanf("%d", &x.dd1);
	
	printf("Masukkan Bulan Sekarang= ");
	scanf("%d", &x.mm1);
	
	printf("Masukkan Tahun Sekarang= ");
	scanf("%d", &x.yy1);
	
	printf("\n");
	
	if(x.dd1>x.dd&&x.mm1<x.mm)
	{hari=x.dd-x.dd1;
	bulan=x.mm-x.mm1;
	tahun=x.yy1-x.yy;
	printf("%d Tahun %d Bulan %d Hari", tahun, bulan, hari);
	}
	
	else if(x.dd1<x.dd&&x.mm1<x.mm)
	{hari=x.dd-x.dd1;
	bulan=x.mm-x.mm1;
	tahun=x.yy1-x.yy;
	printf("%d Tahun %d Bulan %d Hari", tahun, bulan, hari);
	}
	
	else if(x.dd1<x.dd&&x.mm1>x.mm)
	{hari=x.dd-x.dd1;
	bulan=x.mm1-x.mm;
	tahun=x.yy1-x.yy;
	printf("%d Tahun %d Bulan %d Hari", tahun, bulan, hari);
	}
	
	else
	{hari=x.dd1-x.dd;
	bulan=x.mm1-x.mm;
	tahun=x.yy1-x.yy;
	printf("%d Tahun %d Bulan %d Hari", tahun, bulan, hari);
	}
	
return 0;	
}
