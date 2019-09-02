// Program Pola Kotak Bintang

#include<stdio.h>
int main()
{
	//Deklarasi
	int n,i,j;
	
	//Input
	printf("Masukkan Nilai = ");
	scanf("%d", &n);
	
	//Proses
	for(i=1;i<=n;i++)
	{
		if(i==1||i==n)	
		{
		for(j=1;j<=n;j++)
		{printf("*");}
		}
	else
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n)
			{printf("*");}
			else
			{printf(" ");}
		}
	}
	printf("\n");
	}
}
