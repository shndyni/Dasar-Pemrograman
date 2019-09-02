//Program Menghitung Jarak
#include <stdio.h>
#include <math.h>

float jarak(float x1,float y1, float x2,float y2)
{
	//Deklarasi variabel
	float d;
	
	//Rumus menghitung jarak
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	return d;
}

int main()
{
	//Deklarasi variabel
	float x1,y1,x2,y2,d;
	
	printf("Program Untuk Menghitung Jarak \n\n");
	
	//Input
	printf("Masukkan Nilai x1 = ");
	scanf("%f",&x1);
	printf("Masukkan Nilai y1 = ");
	scanf("%f",&y1);
	printf("Masukkan Nilai x2 = ");
	scanf("%f",&x2);
	printf("Masukkan Nilai y2 = ");
	scanf("%f",&y2);
	
	//Rumus
	d = jarak(x1,y1,x2,y2);
	
	//Output
	printf("Jarak = %.2f",d);
	
	return 0;
}

