//Program Proses Nilai

#include<stdio.h>
int main ()
{
	typedef struct {
		char nama [30];
	}nama;
	
	nama siswa [50];
	int jlh_siswa, kimia [10][10], bindo [10][10], mtk [10][10], i, j, k, maks, maks1=0, maks2=0, maks3=0;
	
	printf("PROGRAM PROSES NILAI\n\n");
	printf("Masukan Jumlah Siswa: ");
	scanf("%d",&jlh_siswa);
	printf("\n");
	
	for(i=0; i<jlh_siswa; i++){
		printf("Masukan Nama Siswa: ");
			scanf("%s",&siswa[i].nama);
			printf("Masukan Nilai Kimia: ");
			scanf("%d",&kimia[i][1]);
			printf("Masukan Nilai B.Indonesia: ");
			scanf("%d",&bindo[i][2]);
			printf("Masukan Nilai Matematika: ");
			scanf("%d",&mtk[i][3]);
			printf("\n");
	}
			
	printf("\n\n");
	printf("|\tNAMA\t|\tKIMIA\t|\tBINDO\t|\tMTK\t| \n");
	
	for(i=0; i<jlh_siswa; i++){
		printf("\n|\t%s\t|\t%d\t|\t%d\t|\t%d\t| ",siswa[i].nama, kimia[i][1], bindo[i][2], mtk[i][3]);
			printf("\n");
	}
	
	for(i=0; i<jlh_siswa; i++){
		if(kimia[i][1]>maks){
			maks=kimia[i][1];
		}
	}
	
	for(i=0; i<jlh_siswa; i++){
		if(bindo[i][2]>maks1){
			maks1=bindo[i][2];
		}
	}
	
	for(i=0; i<jlh_siswa; i++){
			if(mtk[i][3]>maks2){
			maks2=mtk[i][3];
		}
	}
		
	printf("\n|NILAI TERTINGGI|\t%d\t|\t%d\t|\t%d\t|",maks,maks1,maks2);
	printf("\n");
	
return 0;
}
