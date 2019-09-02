/* Program Konversi Mata Uang */

#include <stdio.h> 
int main()
{
	//Deklarasi
	int pilih, jumlah, hasil;

	printf("Silahkan pilih: \n");
	printf("1.IDR ke USD \n");
	printf("2.USD ke IDR \n");
	printf("Masukkan Nomor: ");
	scanf("%d",&pilih);
	
	if(pilih==1)
	{printf("Jumlah Uang IDR: Rp.");
	scanf("%d",&jumlah);
	hasil=jumlah/14738;
	printf("\nHasil Konversi = $%d ",hasil);}
	
	else if(pilih==2)
	{printf("Jumlah Uang USD: $ ");
	scanf("%d",&jumlah);
	hasil=jumlah*14738;
	printf("\nHasil Konversi = Rp.%d ",hasil);}
	
	else
	{printf("Error!!");}
	
return 0;
}
