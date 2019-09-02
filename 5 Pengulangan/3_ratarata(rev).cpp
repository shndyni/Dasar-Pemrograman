//Program Rata-rata Nilai

#include <stdio.h> 
int main()
{	
	//Deklarasi
	int i=0;
	float nilai, data=0, jlhNilai, rata2;

	printf("Program Menghitung Rata-rata Nilai\n\n");

	do{
	printf("Masukkan Nilai = ");
	scanf("%f", &nilai);
	i=i+nilai;
	data=data+1;
	} 
	while(nilai !=-1);
	jlhNilai=i+1;
	rata2=jlhNilai/(data-1);
	printf("\nJumlah Nilai %5.0f\n", jlhNilai);
	printf("Rata-rata Nilai Anda %5.2f\n", rata2);
	
return 0;
}

