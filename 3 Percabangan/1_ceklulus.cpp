/* Program Lulus */

#include <stdio.h>
int main()
{
	//Deklarasi
	int nilaiUjian;
	char ket;
	
	//Masukkan Nilai
	printf("Nilai Ujian = ");
	scanf("%d", &nilaiUjian);
	
	//Kondisi
	if (nilaiUjian >= 60)
		printf("\nSelamat Anda LULUS", ket);
	else
		printf("Maaf Anda TIDAK LULUS", ket);
	return 0;	
}
