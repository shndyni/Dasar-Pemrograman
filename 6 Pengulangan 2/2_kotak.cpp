// Program Pola Kotak

#include<stdio.h>
int main()

{
	//Deklarasi
	int n,x,y;
	
	//Input
	printf("Masukkan Nilai = ");
	scanf("%d", &n);
	
	//Proses
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=n;y++)
		
	//Output
		{printf("[]");}
		printf("\n");
	}
}
