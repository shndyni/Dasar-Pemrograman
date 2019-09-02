//Program Bioskop

#include<stdio.h>
main()
{	
	//Deklarasi
	const max_baris=30;
	const max_kolom=30;
	int duduk[max_baris][max_kolom];
	int baris,kolom,mbaris,mkolom,x,y,jumlah;
	long int pendapatan;
	char ulang[6];
	
	printf("PROGRAM BIOSKOP \n\n");
	printf("Masukkan Jumlah Baris Bioskop = ");
	scanf("%d",&mbaris);	
	printf("Masukkan Jumlah Kolom Bioskop = ");
	scanf("%d",&mkolom);

	for(x=1;x<=mbaris;x++){
			for(y=1;y<=mkolom;y++){
				duduk[x][y]=0;
		}
	}
	
	printf("Apakah anda ingin menginput data (y/n)= ");
	scanf("%s",&ulang);
	
	while(strcmp(ulang,"y")==0){
		printf("\nMasukkan Baris Penonton = ");
		scanf("%d",&baris);	
		printf("Masukkan Kolom Penonton = ");
		scanf("%d",&kolom);
	if(baris>mbaris || kolom>mkolom){
		printf("Maksimal baris adalah %d dan kolom adalah %d\n",mbaris,mkolom);
	}else if(duduk[baris][kolom]==1){
		printf("Maaf, Tempat duduk telah dipesan\n");
	}else{
		for(x=1;x<=mbaris;x++){
			for(y=1;y<=mkolom;y++){
				if(x==baris && y==kolom){
					duduk[x][y]=1;
					printf("%d ",duduk[x][y]);
				}else{
					printf("%d ",duduk[x][y]);
				}
			}
			printf("\n");
		}
	}
		printf("\nApakah anda ingin menginput data (y/n)= ");
		scanf("%s",&ulang);
	}
	jumlah=0;
	for(x=1;x<=mbaris;x++){
		for(y=1;y<=mkolom;y++){
			if(duduk[x][y]==1){
				jumlah=jumlah+1;
			}
		}
	}
	pendapatan=jumlah*30000;
	printf("\nJumlah penonton adalah = %d Orang\n",jumlah);
	printf("Pendapatan Bioskop = RP.%d",pendapatan);
	
return 0;
}
