#include <stdio.h>
#include <stdlib.h>

int Proses(int *jam, int *menit, int *s)
{
	*s = *s * 50;
	*menit = (*menit + *s) % 60;
	*jam = ((*menit + *s)/60) + *jam;
}

int main()
{
	
	typedef struct{
		char makul[25];
		char ruang[4];
		int hh;
		int mm;
		int ss;
	}jadwal;
	
	jadwal x1, y2;
	
	printf("Masukkan Mata Kuliah Anda = ");
	gets (x1.makul);
	printf("Masukkan Ruang Kuliah Anda = ");
	gets (x1.ruang);
	printf("\n>>Mulai \n");
	printf("Jam = ");
	scanf("%d", &x1.hh);
	printf("Menit = ");
	scanf("%d", &x1.mm);
	printf("Banyaknya Sesi = ");
	scanf("%d", &x1.ss);
	
	y2.hh = x1.hh;
	y2.mm = x1.mm;
	y2.ss = x1.ss;
	Proses(&x1.hh, &x1.mm, &x1.ss);

	printf("\n\n");
	printf("Ujian %s\n", x1.makul);
	printf("Ruangan %s\n", x1.ruang);
	printf("Jam %d.%d - %d.%d\n", y2.hh, y2.mm, x1.hh, x1.mm);

	return 0;
}
