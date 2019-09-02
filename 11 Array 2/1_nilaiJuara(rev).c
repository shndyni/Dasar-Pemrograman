// Program Juara Nilai Ujian

#include<stdio.h>
#define Nmaks 100

main()
{	
	typedef struct{
		char nama[20];
		int nilai;
	}dataMhs;
	dataMhs tabMhs[Nmaks];
	
	int i,j, Nmin, Nmax;
	char *juara;
	Nmin=0;
	Nmax=0;
	
	printf("Jumlah Siswa (kelas) = ");
	scanf("%d", &j);
	printf("\n\n");
		
	for(i=0;i<j;i++)
	{
		printf("Nama = ");
		scanf("%s", &tabMhs[i].nama);
		printf("Nilai = ");
		scanf("%d", &tabMhs[i].nilai);	
		printf("\n");	
	if(tabMhs[i].nilai<Nmin){
		Nmin=tabMhs[i].nilai;
		juara=tabMhs[i].nama;
		}
	else if(tabMhs[i].nilai>Nmax){
		Nmax=tabMhs[i].nilai;
		juara=tabMhs[i].nama;
		}
	}
		printf("Selamat %s, Kamu Juara!! dengan Nilai %d", juara, Nmax);
	
	
return 0;
}
