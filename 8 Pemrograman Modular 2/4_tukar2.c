//Program Pertukaran

#include <stdio.h>

void Tukar(int a,int b)
{
	//Proses pertukaran
	int temp = a; 
	a= b;
	b = temp;
	
	//Output
	printf("\nHASIL PERTUKARAN :\n");
	printf("A = %d \n", a);
	printf("B = %d \n", b);
}

int main()

{
	//Deklarasi variabel
	int a,b;
	
	//Input
	printf("Masukkan A = ");
	scanf("%d", &a);
	printf("Masukkan B = ");
	scanf("%d", &b);
	
	Tukar(a,b);

return 0;
}

