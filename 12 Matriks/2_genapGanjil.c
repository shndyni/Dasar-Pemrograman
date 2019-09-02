//Program Menampilkan Isi

#include <stdio.h>
main()
{	
	//Deklarasi variabel
	const MAX_BARIS = 10;
	const MAX_KOLOM = 10;
	int x[MAX_BARIS][MAX_KOLOM];
	int i, j, n_bar, n_kol;
	
	//Output
	printf("PROGRAM GANJIL GENAP\n\n");
	printf("Banyak baris: "); //Input banyak baris
	scanf("%d", &n_bar);
	printf("Banyak kolom: "); //Input banyak kolom
	scanf("%d", &n_kol);
	printf("\n");
	
	//Proses
	for (i = 0; i < n_bar; i++){
		for (j = 0; j < n_kol; j++){
			printf("Masukkan x[%d][%d]: ", i,j);
			scanf("%d", &x[i][j]);
			}
	}
	
	//Hasil
	printf("\n");
	printf("Matriks x: \n");
	for (i = 0; i < n_bar; i++){
		for (j = 0; j < n_kol; j++){
			printf("%d ", x[i][j]);
		}
	printf("\n");
	}
	
	//Cek ganjil genap
	printf("\n");
	printf("Hasil: \n");
	for (i = 0; i < n_bar; i++){
		for (j = 0; j < n_kol; j++){
			x[i][j]=x[i][j]%2;
		}
	}
	for (i = 0; i < n_bar; i++){
		for (j = 0; j < n_kol; j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	
return 0;
}
