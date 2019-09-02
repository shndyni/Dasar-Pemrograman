/* Program Cek Segitiga */

#include <stdio.h>
#include <windows.h>
int main()
{
	system("color 07");
	//Deklarasi
	int a, b, c;
	char ket;
	
	//Masukkan Sisi
	printf("Panjang Sisi a = ");
	scanf("%d", &a);
	
	printf("Panjang Sisi b = ");
	scanf("%d", &b);
	
	printf("Panjang Sisi c = ");
	scanf("%d", &c);

	//Kondisi
	if(a==b && a==c)
        printf("\nSegitiga Sama Sisi", ket);  
    else if(a==b || a==c) 
	{
	if(a!=b || a!=c)
        printf("\nSegitiga Sama Kaki", ket);
	}
    else
    	printf("\nSemua Sisi Berbeda", ket);

	return 0;
}


