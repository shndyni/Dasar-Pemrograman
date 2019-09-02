//Program Konversi Matriks ke Bentuk Array

#include<stdio.h>
main()
{	
	//Deklarasi 
	const MAX_BARIS=50;
	const MAX_KOLOM=50;
	int x[MAX_BARIS][MAX_KOLOM];
	int i, j, n_kol, n_bar;
	
	printf("PROGRAM MATRIKS KE ARRAY\n\n");
	printf("Banyak baris: "); //Input banyak baris
	scanf("%d", &n_bar);
	printf("Banyak kolom: "); //Input banyak kolom
	scanf("%d", &n_kol);
	printf("\n");
	
	for(i=1;i<=n_bar;i++){
		for(j=1;j<=n_kol;j++){
			printf("Masukkan Matriks[%d][%d] =",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	
	//Output Matriks
	printf("\nMatriks x=\n");
	for(i=1;i<=n_bar;i++){
		for(j=1;j<=n_kol;j++){
			printf("%d ",x[i][j]);
		}
			printf("\n");
	}
	
	//Output Array
	printf("\nArray x= \n");
	for(i=1;i<=n_bar;i++){
		for(j=1;j<=n_kol;j++){
			printf("%d ",x[i][j]);
		}
	}
	
return 0;
}
