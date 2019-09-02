//Program Menu

#include <stdio.h>
int main()
{
	//Deklarasi
	int pilihan;
	
	printf("---MENU PROGRAM---\n\n");
	printf("1. Menu Satu\n2. Menu Dua\n3. Menu Tiga\n4. Keluar");
	printf("\nMenu yang akan di pilih : ");
	scanf("%d", &pilihan);

	do
	{
	if(pilihan==1)
	printf("1. Menu Satu\n");
	else if(pilihan==2)
	printf("2. Menu Dua\n");
	else if (pilihan==3)
	printf("3. Menu Tiga\n");
	else
	printf("Exit...\n");
	printf("\nSilakan pilih menu lagi : ");
	scanf("%d", &pilihan);
	}
	while(pilihan<=3);
	printf("Exit...\n");
	
return 0;
}
	
