/* Program BMI */
#include <stdio.h>
int main()
{
	//Deklarasi variabel
	float berat, tinggi, bmi;
	
	//Masukkan Berat Badan
	printf("Masukkan Berat Badan (kg) = ");
	scanf("%f", &berat);
	
	//Masukkan Tinggi Badan
	printf("Masukkan Tinggi Badan (m) = ");
	scanf("%f", &tinggi);
	
	//Hitung BMI
	bmi = berat/(tinggi*tinggi);
	printf("Body Mass Index (BMI) = %f", bmi);
	return 0;
}
