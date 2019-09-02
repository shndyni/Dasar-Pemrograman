// Program Membaca Matriks dari Notepad

#include <stdio.h>
int main ()
{
	//Deklarasi
	const MAX_BARIS=10;
	const MAX_KOLOM=10;
	int x[MAX_BARIS][MAX_KOLOM];
	int i, j, n_bar, n_kol;
	
	FILE *Fin=fopen("dataMatriks.txt","r");

	fscanf(Fin, "%d", &n_bar);
	fscanf(Fin, "%d", &n_kol);
	for (i=0;i<n_bar;i++){
		for (j=0;j<n_kol;j++){
			fscanf(Fin, "%d", &x[i][j]);
		}
	}
	system("cls");
	
	//Output
	for (i=0;i<n_bar;i++){
		for (j=0;j<n_kol;j++){
			printf("%2d", x[i][j]);
		}
		printf("\n");
	}
	fclose(Fin);
	
	system("pause");
	return 0;
	
}
