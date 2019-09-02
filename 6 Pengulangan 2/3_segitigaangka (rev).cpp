// Program Segitiga Angka

#include<stdio.h>
int main()
{
	//Deklarasi
	int n,x,y; // Deklarasi
	
	//Input
	printf("Masukkan Nilai = ");
	scanf("%d", &n);
	
	//Proses
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=x;y++)
	
	//Ootput
		{printf("%d",y);}
		printf("\n");
	}
}
